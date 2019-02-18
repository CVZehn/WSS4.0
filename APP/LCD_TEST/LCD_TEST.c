/**
 ******************************************************************************
 * @file        LCD_TEST.c
 * @author      门禁开发小组
 * @version     V1.0.0
 * @date        2018-01-26
 * @brief       系统运行指示灯，可以通过RT_USING_RUN_LED控制是否需要
 * @note        
 * @History
 * Date             Author      version                 Notes
 * 2018-08-8       Zehn        V1.0.0             first version.
 */
	
/* Includes ------------------------------------------------------------------*/

#include "LCD_TEST.h"
#include "delay.h"
#include "lvgl.h"  
#include "Bsp_LCD.h" 


#define USING_LV_DEMO 1

#if USING_LV_DEMO ==1
	#include "demo.h" 
#endif	
/**
 * @func	rt_LCD_TEST_thread_entry`
 * @brief 	LCD_TEST线程入口
 * @param	parameter 用户数据
 * @note  	
 * @retval	无
 */
void rt_lcd_test_thread_entry(void * parameter)
{
	(void)parameter;
//    TIM_SetCompare4(TIM1,400);
	
#if USING_LV_DEMO ==1
	
    demo_create();
#else
	
#endif	
	while(1)
	{
        lv_tick_inc(1);		
		lv_task_handler();
		delay_ms(1);
	}
}