#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include "esp_log.h"
#include "esp_console.h"
#include "bsp_wrapper.h"

#define DEBUG_TAG "WirelessLink"

#define LED_ON_CMD "LED_ON"
#define LED_ON_DES "operate gpio,let led on"
#define LED_OFF_CMD "LED_OFF"
#define LED_OFF_DES "operate gpio,let led off"
#define LED_OP_CMD "LED_OP"
#define LED_OP_DES "operate gpio"

typedef struct
{
    uint8_t *cmd;
    uint8_t *description;
} cmd_desctiption_t;

cmd_desctiption_t cmd_usage[] =
{
    {(uint8_t *)LED_ON_CMD,(uint8_t *)LED_ON_DES},
    {(uint8_t *)LED_OFF_CMD,(uint8_t *)LED_OFF_DES},
    {(uint8_t *)LED_OP_CMD,(uint8_t *)LED_OP_DES},
};

int uart_console_parse(int argn, char **argv)
{
    uint8_t index = 0;
    for(index = 0; index < argn; index++)
        printf("argv[%d] = [%s]\n",index,argv[index]);

    if(strncmp(LED_ON_CMD,argv[0],strlen(LED_ON_CMD)) == 0)
    {
        ESP_LOGI(DEBUG_TAG, "LED_ON_CMD");
        LED_ON;
        return 0;
    }

    if(strncmp(LED_OFF_CMD,argv[0],strlen(LED_OFF_CMD)) == 0)
    {
        ESP_LOGI(DEBUG_TAG, "LED_OFF_CMD");
        LED_OFF;
        return 0;
    }

    if(strncmp(LED_OP_CMD,argv[0],strlen(LED_OP_CMD)) == 0)
    {
        uint8_t led_op = 0;
        if (argn != 2) 
        {
            ESP_LOGE(DEBUG_TAG,"Insufficient number of arguments,usage:\nLED_OP 1 -> LED ON\nLED_OP 0 -> LED OFF");
            return 1;
        }
        ESP_LOGI(DEBUG_TAG, "LED_OP_CMD");
        if (sscanf(argv[1], "%hhd", &led_op) != 1)
        {
            ESP_LOGE(DEBUG_TAG,"Insufficient arguments,usage:\nLED_OP >=1 -> LED ON\nLED_OP 0 -> LED OFF");
            return 1;
        }
        if(led_op)
            LED_ON;
        else if(led_op)
            LED_OFF;
        
        return 0;
    }

    return 1;
}

void register_uart_console_cmd()
{
    uint8_t index = 0;

    for(index = 0; index < sizeof(cmd_usage)/sizeof(cmd_desctiption_t); index++)
    {
        esp_console_cmd_t console_cmd =
        {
            .command = (char *)cmd_usage[index].cmd,
            .help = (char *)cmd_usage[index].description,
            .hint = NULL,
            .func = uart_console_parse,
        };

        ESP_ERROR_CHECK(esp_console_cmd_register(&console_cmd));
    }

}


void app_main(void)
{
    /* LED INIT */
    bsp_led_init();

    /* UART CONSOLE INIT */
    esp_console_repl_t *repl = NULL;
    esp_console_repl_config_t repl_config = ESP_CONSOLE_REPL_CONFIG_DEFAULT();
    esp_console_dev_uart_config_t uart_config = ESP_CONSOLE_DEV_UART_CONFIG_DEFAULT();
    repl_config.prompt = "Wireless Link >";

    ESP_ERROR_CHECK(esp_console_new_repl_uart(&uart_config, &repl_config, &repl));

    /* Register commands */
    register_uart_console_cmd();

    // start console REPL
    ESP_ERROR_CHECK(esp_console_start_repl(repl));
}