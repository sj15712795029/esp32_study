/******************************************************************************
  * @file    bsp_misc.c
  * @author  Yu-ZhongJun
  * @version V0.0.1
  * @date    2021-12-18(happy birthday)
  * @brief   bsp misc source file
******************************************************************************/

#include "bsp_misc.h"

#define MAX_COL 16
#define SHOW_LINE_SIZE 16
void bsp_hex_dump(uint8_t *data,uint32_t len)
{
#if DEBUG_ENABLE > 0
    int line;
    int curline = 0;
    int curcol = 0;
    char showline[SHOW_LINE_SIZE];
    int data_pos = 0;

    if(len % MAX_COL)
    {
        line = len/MAX_COL+1;
    }
    else
    {
        line = len/MAX_COL;
    }

    for(curline = 0; curline < line; curline++)
    {
        sprintf(showline,"%08xh:",curline*MAX_COL);
        BSP_DEBUG("%s",showline);
        for(curcol = 0; curcol < MAX_COL; curcol++)
        {
            if(data_pos < len)
            {
                BSP_DEBUG("%02x ",data[data_pos]);
                data_pos++;
                continue;
            }
            else
            {
                break;
            }
        }
        BSP_DEBUG("\n");
    }
#endif
}

void bsp_delay_ms(uint32_t cms)
{
	TickType_t xDelay = cms / portTICK_PERIOD_MS;
	
	vTaskDelay( xDelay );
}