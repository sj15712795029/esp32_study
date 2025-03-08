/* UART Select Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sys/errno.h>
#include <sys/unistd.h>
#include <sys/select.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/uart_vfs.h"
#include "driver/uart.h"
#include "driver/gpio.h"
#include "cJSON.h"

#define LED_PIN    17
#define LED_PIN_SEL  (1<<LED_PIN)

/* Operate LED on/off */
#define LED_OFF	gpio_set_level(LED_PIN, 1)
#define LED_ON	gpio_set_level(LED_PIN, 0)

void bsp_led_init()
{
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = LED_PIN_SEL;
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);
}

static const char* TAG = "uart_select_example";

#define UART_JSON_BUFFER_SIZE 512
char uart_json_buf[UART_JSON_BUFFER_SIZE] = {0};

void uart_receive_parse(uint8_t *shell_string)
{
    cJSON* parse_json = cJSON_Parse((const char *)shell_string);

    if(!parse_json)
    {
        ESP_LOGE(TAG, "Not specific json format:%s\n",shell_string);
        goto exit;
    }
    uint8_t* func_value = (uint8_t*)((cJSON *)cJSON_GetObjectItem(parse_json,"FUNC"))->valuestring;
    uint8_t* operate_value = (uint8_t*)((cJSON *)cJSON_GetObjectItem(parse_json,"OPERATE"))->valuestring;
    uint8_t* para1 = (uint8_t*)((cJSON *)cJSON_GetObjectItem(parse_json,"PARAM1"))->valuestring;
    uint8_t* para2 = (uint8_t*)((cJSON *)cJSON_GetObjectItem(parse_json,"PARAM2"))->valuestring;
    uint8_t* para3 = (uint8_t*)((cJSON *)cJSON_GetObjectItem(parse_json,"PARAM3"))->valuestring;
    uint8_t* para4 = (uint8_t*)((cJSON *)cJSON_GetObjectItem(parse_json,"PARAM4"))->valuestring;
    uint8_t* para5 = (uint8_t*)((cJSON *)cJSON_GetObjectItem(parse_json,"PARAM5"))->valuestring;
    uint8_t* para6 = (uint8_t*)((cJSON *)cJSON_GetObjectItem(parse_json,"PARAM6"))->valuestring;
    ESP_UNUSED(para1);
    ESP_UNUSED(para2);
    ESP_UNUSED(para3);
    ESP_UNUSED(para4);
    ESP_UNUSED(para5);
    ESP_UNUSED(para6);
    if(!func_value || !operate_value)
    {
        ESP_LOGE(TAG, "Not specific json format:%s\n",shell_string);
        goto exit;
    }

    if(strcmp((const char *)func_value,"HW") == 0)
    {
        if(strcmp((const char *)operate_value,"LED_ON") == 0)
        {
            ESP_LOGD(TAG, "UART PARSE DEBUG:operate LED_ON\n");
            LED_ON;
            goto exit;
        }

        if(strcmp((const char *)operate_value,"LED_OFF") == 0)
        {
            ESP_LOGD(TAG, "UART PARSE DEBUG:operate LED_OFF\n");
            LED_OFF;
            goto exit;
        }

    }

	if(strcmp((const char *)shell_string,"shop220811498.taobao.com") == 0)
		ESP_LOGD(TAG, "welcome to use our stm32f1 camera wifi board\n");
	else
		ESP_LOGD(TAG, "UART PARSE ERR:HW_ERR_SHELL_NO_CMD\n");
	
exit:
    cJSON_Delete(parse_json);
    return;
}

static void uart_select_task(void *arg)
{
    if (uart_driver_install(UART_NUM_0, 2 * 1024, 0, 0, NULL, 0) != ESP_OK) {
        ESP_LOGE(TAG, "Driver installation failed");
        vTaskDelete(NULL);
    }

    uart_config_t uart_config = {
        .baud_rate = 115200,
        .data_bits = UART_DATA_8_BITS,
        .parity    = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_DEFAULT,
    };

    uart_param_config(UART_NUM_0, &uart_config);

    while (1) {
        int fd;

        if ((fd = open("/dev/uart/0", O_RDWR)) == -1) {
            ESP_LOGE(TAG, "Cannot open UART");
            vTaskDelay(5000 / portTICK_PERIOD_MS);
            continue;
        }

        // We have a driver now installed so set up the read/write functions to use driver also.
        uart_vfs_dev_use_driver(UART_NUM_0);

        while (1) {
            int s;
            fd_set rfds;
            struct timeval tv = {
                .tv_sec = 5,
                .tv_usec = 0,
            };

            FD_ZERO(&rfds);
            FD_SET(fd, &rfds);

            s = select(fd + 1, &rfds, NULL, NULL, &tv);

            if (s < 0) {
                ESP_LOGE(TAG, "Select failed: errno %d (%s)", errno, strerror(errno));
                break;
            } else if (s == 0) {
                ESP_LOGI(TAG, "Timeout has been reached and nothing has been received");
            } else {
                if (FD_ISSET(fd, &rfds)) {
                    memset(uart_json_buf,0,UART_JSON_BUFFER_SIZE);
                    if (read(fd, uart_json_buf, UART_JSON_BUFFER_SIZE) > 0) {
                        // Note: Only one character was read even the buffer contains more. The other characters will
                        // be read one-by-one by subsequent calls to select() which will then return immediately
                        // without timeout.
                        uart_receive_parse((uint8_t *)uart_json_buf);
                    } else {
                        ESP_LOGE(TAG, "UART read error");
                        break;
                    }
                } else {
                    ESP_LOGE(TAG, "No FD has been set in select()");
                    break;
                }
            }
        }

        close(fd);
    }

    vTaskDelete(NULL);
}

void app_main(void)
{
    bsp_led_init();
    xTaskCreate(uart_select_task, "uart_select_task", 4 * 1024, NULL, 5, NULL);
}