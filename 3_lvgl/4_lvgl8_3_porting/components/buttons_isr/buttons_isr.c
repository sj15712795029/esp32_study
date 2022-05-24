
#include "buttons_isr.h"

#include "esp_log.h"


static const char *TAG ="BUTTONS_ISR";

//------------------------------------------------------------
 static xQueueHandle gpio_evt_queue = NULL;
//------------------------------------------------------------
#define GPIO_OUTPUT_PIN_SEL (1ULL<<CONFIG_BUTTON_BLINK_GPIO)
#define GPIO_INPUT_PIN_SEL ((1ULL<<CONFIG_BUTTON_GPIO_1) | (1ULL<<CONFIG_BUTTON_GPIO_2))
#define ESP_INTR_FLAG_DEFAULT 0



static void IRAM_ATTR gpio_isr_handler(void* arg)
{
  uint32_t gpio_num = (uint32_t) arg;
  xQueueSendFromISR(gpio_evt_queue, &gpio_num, NULL);

  }

static void task_buttons(void* arg)
{
   uint32_t io_num;
   for (;;) {
     if(xQueueReceive(gpio_evt_queue, &io_num,portMAX_DELAY)) {
       printf("GPIO[%d] intr, val: %d \n",io_num, gpio_get_level(io_num));
       ESP_LOGI(TAG, "Button: [%d] intr, val: %d \n",io_num, gpio_get_level(io_num));

     }
   }

  }


void set_buttons_isr()
{
  ESP_LOGI(TAG, "CONFIG BUTTONS ISR");
  gpio_config_t io_conf = {};
  io_conf.intr_type = GPIO_INTR_DISABLE;
  io_conf.mode=GPIO_MODE_OUTPUT;
  io_conf.pin_bit_mask=GPIO_OUTPUT_PIN_SEL;
  io_conf.pull_down_en=0;
  io_conf.pull_up_en=0;

  gpio_config(&io_conf);

  io_conf.intr_type = GPIO_INTR_POSEDGE;
  io_conf.mode=GPIO_MODE_INPUT;
  io_conf.pin_bit_mask=GPIO_INPUT_PIN_SEL;
  io_conf.pull_up_en=1;


  gpio_config(&io_conf);

  gpio_set_intr_type(CONFIG_BUTTON_GPIO_1,GPIO_INTR_ANYEDGE);

  gpio_evt_queue=xQueueCreate(10, sizeof(uint32_t));




  gpio_install_isr_service(ESP_INTR_FLAG_DEFAULT); //enable interrupts

  gpio_isr_handler_add(CONFIG_BUTTON_GPIO_1, gpio_isr_handler, (void*) CONFIG_BUTTON_GPIO_1);
  gpio_isr_handler_add(CONFIG_BUTTON_GPIO_2, gpio_isr_handler, (void*) CONFIG_BUTTON_GPIO_2);

#ifdef CONFIG_BUTTON_RUNTASK_SCANBUTTONS 
  xTaskCreatePinnedToCore(task_buttons, "task_buttons", 2048, NULL, 10, NULL, 0);
#endif



}

//------------------------------------------------------------
