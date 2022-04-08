/******************************************************************************
  * @file    bsp_led.h
  * @author  Yu-ZhongJun
  * @version V0.0.1
  * @date    2021-12-18
  * @brief   led header file
******************************************************************************/
#ifndef HW_LED_H_H_H
#define HW_LED_H_H_H

#include "bsp_misc.h"

#define LED_PIN    17
#define LED_PIN_SEL  (1<<LED_PIN)


/* Operate LED on/off */
#define LED_OFF	gpio_set_level(LED_PIN, 1)
#define LED_ON	gpio_set_level(LED_PIN, 0)

uint8_t bsp_led_init(void);

#endif