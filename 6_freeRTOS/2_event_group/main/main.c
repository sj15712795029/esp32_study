#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"

#define TEST_BIT0 (1<<0)
#define TEST_BIT1 (1<<1)
static EventGroupHandle_t event_group_test;


void event_group_wait_task1(void *pvParameters)
{
    printf("event_group_wait_task1 wait any one bit\n");
    while(1)
    {     
        EventBits_t bits = xEventGroupWaitBits(event_group_test,
            TEST_BIT0 | TEST_BIT1,
            pdTRUE,
            pdFALSE,
            portMAX_DELAY);

        printf("task1 wait 0x%x\n",bits);
    }
    
}

void event_group_wait_task2(void *pvParameters)
{
    printf("event_group_wait_task2 wait all bit\n");
    while(1)
    {
        
        EventBits_t bits = xEventGroupWaitBits(event_group_test,
            TEST_BIT0 | TEST_BIT1,
            pdTRUE,
            pdTRUE,
            portMAX_DELAY);

        printf("task2 wait 0x%x\n",bits);
    }
    
}

void app_main(void)
{
    event_group_test = xEventGroupCreate();

    xTaskCreate(&event_group_wait_task1, "event_group_wait_task1", 2048, NULL, 6, NULL);
    xTaskCreate(&event_group_wait_task2, "event_group_wait_task2", 2048, NULL, 7, NULL);

    while(1)
    {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        printf("set bit 0\n");
        xEventGroupSetBits(event_group_test, TEST_BIT0);
        
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        printf("set bit 1\n");
        xEventGroupSetBits(event_group_test, TEST_BIT1);

        vTaskDelay(1000 / portTICK_PERIOD_MS);
        printf("set bit 0,1\n");
        xEventGroupSetBits(event_group_test, TEST_BIT0|TEST_BIT1);
        
    }

    vEventGroupDelete(event_group_test);
}