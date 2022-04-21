#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

static QueueHandle_t message_queue;

typedef struct {
    uint8_t *q_data;
    uint16_t q_data_len;
} message_data_t;

void msg_queue_send_task(void *pvParameters)
{
    printf("msg_queue_send_task\n");
    while(1)
    {
        uint8_t data_len = rand() % 256;
        message_data_t message_data;

        if(!data_len)
            data_len = 1;

        message_data.q_data_len = data_len;
        message_data.q_data = malloc(data_len);
        if (message_data.q_data == NULL) {
            printf("Malloc q_data_len failed!");
            return;
        }
        
        printf("message data len = %d\n",data_len);
        memset(message_data.q_data,data_len,data_len);
        if (xQueueSend(message_queue, (void *)&message_data, ( TickType_t ) 0) != pdTRUE) {
            printf("Failed to enqueue message_queue. Queue full.");
            /* If data sent successfully, then free the pointer in `xQueueReceive'
            * after processing it. Or else if enqueue in not successful, free it
            * here. */
            free(message_data.q_data);
        }

        vTaskDelay(1000 / portTICK_RATE_MS);
    }
    
}

void app_main(void)
{
    message_data_t message_data;
    message_queue = xQueueCreate(15, sizeof(message_data_t));
    if (message_queue == NULL) {
        printf("Queue creation failed\n");
        return;
    }

    xTaskCreate(&msg_queue_send_task, "msg_queue_send_task", 2048, NULL, 6, NULL);

    while(1)
    {
        if (xQueueReceive(message_queue, &message_data, portMAX_DELAY) != pdPASS) {
            printf("Queue receive error");
        } else {
            printf("message_data len:%d\n",message_data.q_data_len);
            printf("message_data[0]=%d message_data[%d]=%d\n",message_data.q_data[0],
                message_data.q_data_len-1,message_data.q_data[message_data.q_data_len-1]);
                free(message_data.q_data);
        }
    }
}