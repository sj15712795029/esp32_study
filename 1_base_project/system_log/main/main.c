#include "esp_log.h"
#include "wl_log.h"

static const char* TAG = "Wireless Link";

void esp32_logging_lib_show()
{
    ESP_LOGE(TAG, "I am esp32 error log");
    ESP_LOGW(TAG, "I am esp32 warning log");
    ESP_LOGI(TAG, "I am esp32 info log");
    ESP_LOGD(TAG, "I am esp32 debug log");
    ESP_LOGV(TAG, "I am esp32 verbose log");
}

void wl_logging_lib_show()
{
    WL_LOGE(TAG, "I am wireless link(wl) error log");
    WL_LOGW(TAG, "I am wireless link(wl) warning log");
    WL_LOGI(TAG, "I am wireless link(wl) info log");
    WL_LOGD(TAG, "I am wireless link(wl) debug log");
    WL_LOGV(TAG, "I am wireless link(wl) verbose log");
}

void app_main(void)
{
    esp32_logging_lib_show();
    wl_logging_lib_show();
}
