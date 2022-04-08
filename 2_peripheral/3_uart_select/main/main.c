#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sys/errno.h>
#include <sys/unistd.h>
#include <sys/select.h>
#include "esp_log.h"
#include "esp_vfs.h"
#include "esp_vfs_dev.h"
#include "driver/uart.h"
#include "bsp_wrapper.h"

#define DEBUG_TAG "WirelessLink"

#define RECV_BUF_MAX_SIZE 256
uint8_t recv_buf[RECV_BUF_MAX_SIZE] = {0};

#define LED_ON_CMD "LED_ON"
#define LED_OFF_CMD "LED_OFF"

int uart_console_parse(uint8_t *shell_commmand)
{

    if(strncmp(LED_ON_CMD,(const char*)shell_commmand,strlen(LED_ON_CMD)) == 0)
    {
        ESP_LOGI(DEBUG_TAG, "LED_ON_CMD");
        LED_ON;
        return 0;
    }

    if(strncmp(LED_OFF_CMD,(const char*)shell_commmand,strlen(LED_OFF_CMD)) == 0)
    {
        ESP_LOGI(DEBUG_TAG, "LED_OFF_CMD");
        LED_OFF;
        return 0;
    }

    return 1;
}

void app_main(void)
{
    /* LED INIT */
    bsp_led_init();

    uart_config_t uart_config = {
        .baud_rate = 115200,
        .data_bits = UART_DATA_8_BITS,
        .parity    = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_APB,
    };
    uart_driver_install(UART_NUM_0, 2*1024, 0, 0, NULL, 0);
    uart_param_config(UART_NUM_0, &uart_config);

    while (1) {
        int fd;

        if ((fd = open("/dev/uart/0", O_RDWR)) == -1) {
            ESP_LOGE(DEBUG_TAG, "Cannot open UART");
            vTaskDelay(5000 / portTICK_PERIOD_MS);
            continue;
        }

        // We have a driver now installed so set up the read/write functions to use driver also.
        esp_vfs_dev_uart_use_driver(0);

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
                ESP_LOGE(DEBUG_TAG, "Select failed: errno %d", errno);
                break;
            } else if (s == 0) {
                ESP_LOGI(DEBUG_TAG, "Timeout has been reached and nothing has been received");
            } else {
                if (FD_ISSET(fd, &rfds)) {
                    memset(recv_buf,0,RECV_BUF_MAX_SIZE);
                    if (read(fd, &recv_buf, RECV_BUF_MAX_SIZE) > 0) {
                        ESP_LOGI(DEBUG_TAG, "Received: %s", recv_buf);
                        uart_console_parse(recv_buf);
                    } else {
                        ESP_LOGE(DEBUG_TAG, "UART read error");
                        break;
                    }
                } else {
                    ESP_LOGE(DEBUG_TAG, "No FD has been set in select()");
                    break;
                }
            }
        }

        close(fd);
    }
}