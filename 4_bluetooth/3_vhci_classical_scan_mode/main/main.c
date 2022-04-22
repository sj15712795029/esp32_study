/* BLE Combined Advertising and Scanning Example.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include <string.h>
#include "esp_bt.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "bt_hci_common.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define TAG "Wireless Link "
static uint8_t hci_cmd_buf[255];

static void controller_rcv_pkt_ready(void)
{
    printf("controller rcv pkt ready\n");
}


static int host_rcv_pkt(uint8_t *data, uint16_t len)
{
    printf("host rcv pkt: ");
    for (uint16_t i = 0; i < len; i++) {
        printf("0x%02x ", data[i]);
    }
    printf("\n");
    return 0;
}

static esp_vhci_host_callback_t vhci_host_cb = {
    controller_rcv_pkt_ready,
    host_rcv_pkt
};

static void hci_cmd_send_reset(void)
{
    uint16_t sz = make_cmd_reset (hci_cmd_buf);
    esp_vhci_host_send_packet(hci_cmd_buf, sz);
}

static void hci_cmd_send_change_local_name(void)
{
    memset(hci_cmd_buf,0,sizeof(hci_cmd_buf));
    uint16_t sz = make_cmd_chanage_local_name (hci_cmd_buf,(uint8_t *)TAG);
    esp_vhci_host_send_packet(hci_cmd_buf, sz);
}

static void hci_cmd_send_set_scan_mode(void)
{
    uint8_t scan_mode = 3; // inquiry scan & page scan enable
    uint16_t sz = make_cmd_set_scan_mode (hci_cmd_buf,scan_mode);
    esp_vhci_host_send_packet(hci_cmd_buf, sz);
}


void app_main(void)
{
    int cmd_cnt = 0;
    /* Initialize NVS — it is used to store PHY calibration data */
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK( ret );
    esp_bt_controller_config_t bt_cfg = BT_CONTROLLER_INIT_CONFIG_DEFAULT();

    ret = esp_bt_controller_mem_release(ESP_BT_MODE_BLE);
    if (ret) {
        ESP_LOGI(TAG, "Bluetooth controller release ble memory failed: %s", esp_err_to_name(ret));
        return;
    }

    if ((ret = esp_bt_controller_init(&bt_cfg)) != ESP_OK) {
        ESP_LOGI(TAG, "Bluetooth controller initialize failed: %s", esp_err_to_name(ret));
        return;
    }

    if ((ret = esp_bt_controller_enable(ESP_BT_MODE_CLASSIC_BT)) != ESP_OK) {
        ESP_LOGI(TAG, "Bluetooth controller enable failed: %s", esp_err_to_name(ret));
        return;
    }

    esp_vhci_host_register_callback(&vhci_host_cb);

    while (1) {
        bool send_avail = false;
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        send_avail = esp_vhci_host_check_send_available();
        if (send_avail) {
            switch (cmd_cnt) {
            case 0: hci_cmd_send_reset(); ++cmd_cnt; break;
            case 1: hci_cmd_send_change_local_name(); ++cmd_cnt; break;
            case 2: hci_cmd_send_set_scan_mode(); ++cmd_cnt; break;
            }
        }
        printf("BT SCAN MODE, flag_send_avail: %d, cmd_sent: %d\n", send_avail, cmd_cnt);
    }
}
