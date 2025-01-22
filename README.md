# esp32_study
这是Wireless link ESP32教程开发板的仓库

教程版的连接为：https://item.taobao.com/item.htm?spm=a1z10.1-c-s.w4004-22329603896.20.4dde41f9cwNdfN&id=672388903856



| 分类           | 工程名称                    | 介绍                                        |
| -------------- | --------------------------- | ------------------------------------------- |
| 1_base_project | template-app                | 工程模板(用ESP-IDF插件创建)                 |
|                | wireless_link_project       | 工程模板(复制example下的get started工程)    |
|                | system_log                  | esp32 logging验证 & wl自己创建logging的工程 |
| 2_peripheral   | 1_led                       | ESP32 GPIO控制LED                           |
|                | 2_uart_console              | ESP32 UART console工程                      |
|                | 3_uart_select               | ESP32 UART select工程                       |
| 3_lvgl         | 1_lvgl8_2_porting           | LVGL 8.2的移植                              |
|                | 2_lvgl8_0_porting           | LVGL 8.0的移植                              |
|                | 3_lvgl7_10_porting          | LVGL 7.10的移植                             |
| 4_bluetooth    | 1_vhci_ble_adv              | vhci架构实现ble广播                         |
|                | 2_vhci_ble_scan             | vchi架构实现ble搜索                         |
|                | 3_vhci_classical_scan_mode  | vhci架构的传统蓝牙scan mode                 |
|                | 4_controller_hci_uart_esp32 | ESP32作为蓝牙controller的工程               |
|                | 5_ble_mesh_onoff_server     | ESP32 BLE mesh onoff模型server              |
| 5_wifi         | 1_station                   | wifi station连接热点的基础工程              |
|                | 2_ap                        | wifi ap创建热点的基础工程                   |
| 6_freeRTOS     | 1_msg_queue                 | 消息队列的使用                              |
|                | 2_event_group               | 事件组的使用                                |
| 7_demo         |                             |                                             |

