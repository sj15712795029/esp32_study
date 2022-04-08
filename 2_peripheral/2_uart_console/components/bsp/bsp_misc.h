/******************************************************************************
  * @file    bsp_misc.h
  * @author  Yu-ZhongJun
  * @version V0.0.1
  * @date    2021-12-18(happy birthday)
  * @brief   bsp misc header file
******************************************************************************/
#ifndef BSP_MISC_H_H_H
#define BSP_MISC_H_H_H

#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"

#define DEBUG_ENABLE	1
#if DEBUG_ENABLE > 0
#define BSP_DEBUG	printf
#else
#define BSP_DEBUG
#endif

typedef enum
{
	BSP_ERR_OK,
	
}bsp_err_e;

#if DEBUG_ENABLE > 0
void bsp_hex_dump(uint8_t *data,uint32_t len);
#endif
void bsp_delay_ms(uint32_t cms);

#endif