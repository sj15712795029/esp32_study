/******************************************************************************
  * @file    bsp_led.c
  * @author  Yu-ZhongJun
  * @version V0.0.1
  * @date    2021-12-18
  * @brief   led source file
******************************************************************************/

#include "bsp_led.h"

/******************************************************************************
 * func name   : bsp_led_init
 * para        : NULL
 * return      : led init result
 * description : LED init,LED->IO27
******************************************************************************/
uint8_t bsp_led_init()
{
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = LED_PIN_SEL;
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);
    return BSP_ERR_OK;
}