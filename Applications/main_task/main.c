/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2006-08-31     Bernard      first implementation
 * 2011-06-05     Bernard      modify for STM32F107 version
 */

#include <rthw.h>
#include <rtthread.h>
#include "lvgl.h"  
#include "Bsp_LCD.h"
#include "LCD_TEST.h"
#include "tft.h"
#include "delay.h"
#include "main_task.h"  
#include "LED.h" 

/**
 * @addtogroup STM32
 */
int main(void)
{
	delay_init();
	Bsp_LCD_Init();
	lv_init();
	tft_init();
    /* user app entry */    
	rt_thread_t tid;

    tid = rt_thread_create("LCD_TEST",
        rt_lcd_test_thread_entry, RT_NULL,
        2048, RT_THREAD_PRIORITY_MAX/3, 20);

    if (tid != RT_NULL)
        rt_thread_startup(tid);
	
    tid = rt_thread_create("LED",
        rt_led_thread_entry, RT_NULL,
        2048, RT_THREAD_PRIORITY_MAX/3, 21);

    if (tid != RT_NULL)
        rt_thread_startup(tid);

    return 0;
}

/*@}*/
