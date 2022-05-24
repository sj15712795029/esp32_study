#ifndef BUTTON_ISR_H_
#define BUTTON_ISR_H_
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "esp_err.h"
#include "sdkconfig.h"

void set_buttons_isr();

#endif


