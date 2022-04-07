#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_PIN    17
#define LED_PIN_SEL  (1<<LED_PIN)

/* Operate LED on/off */
#define LED_OFF	gpio_set_level(LED_PIN, 1)
#define LED_ON	gpio_set_level(LED_PIN, 0)

/******************************************************************************
 * func name   : bsp_led_init
 * para        : NULL
 * return      : led init result
 * description : LED init,LED->IO17
******************************************************************************/
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

void bsp_delay_ms(uint32_t cms)
{
	TickType_t xDelay = cms / portTICK_PERIOD_MS;
	
	vTaskDelay( xDelay );
}

void app_main(void)
{
    uint32_t count = 0;
    bsp_led_init();

    while(1)
    {
        if(count % 2 == 0)
            LED_ON;
        else
            LED_OFF;
        
        count++;
        bsp_delay_ms(1000);
    }
}