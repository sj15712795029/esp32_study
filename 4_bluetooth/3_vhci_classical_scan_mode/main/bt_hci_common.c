/* Basic functionality for Bluetooth Host Controller Interface Layer.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include "bt_hci_common.h"
#include <string.h>


uint16_t make_cmd_reset(uint8_t *buf)
{
    UINT8_TO_STREAM (buf, H4_TYPE_COMMAND);
    UINT16_TO_STREAM (buf, HCI_RESET);
    UINT8_TO_STREAM (buf, 0);
    return HCI_H4_CMD_PREAMBLE_SIZE;
}

uint16_t make_cmd_chanage_local_name(uint8_t *buf,uint8_t *name)
{
    UINT8_TO_STREAM (buf, H4_TYPE_COMMAND);
    UINT16_TO_STREAM (buf, HCI_CHANGE_LOCAL_NAME);
    UINT8_TO_STREAM (buf, 248);
    ARRAY_TO_STREAM(buf,name,strlen((const char *)name));

    return HCI_H4_CMD_PREAMBLE_SIZE + HCIC_PARAM_SIZE_CHNAGE_LOCAL_NAME;
}

uint16_t make_cmd_set_scan_mode(uint8_t *buf,uint8_t scan_mode)
{
    UINT8_TO_STREAM (buf, H4_TYPE_COMMAND);
    UINT16_TO_STREAM (buf, HCI_SET_SCAN_MODE);
    UINT8_TO_STREAM (buf, HCIC_PARAM_SIZE_SET_SCAN_MODE);
    UINT8_TO_STREAM (buf, scan_mode);

    return HCI_H4_CMD_PREAMBLE_SIZE + HCIC_PARAM_SIZE_SET_SCAN_MODE;
}


