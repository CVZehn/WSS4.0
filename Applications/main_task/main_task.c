
#include "../lvgl/lvgl.h"
#include "main_task.h"
#include "lv_btn.h"
#include "../lvgl/lv_misc/lv_font.h"

extern lv_font_t WRJZY_20;
extern lv_font_t HZChar_16;
char *menu_name[] = {" ”∆µ","“Ù¿÷","¿∂—¿","Œﬁœﬂ","¿÷“Ù","—¿¿∂","ƒ÷÷”","¡øµÁ","…Ë÷√"};


void main_task_creat()
{	

	lv_obj_t * scr = lv_obj_create(NULL,NULL);
	lv_scr_load(scr);
	
	lv_obj_t * btn1 = lv_btn_create(scr,NULL);
	lv_btn_set_fit(btn1,true,true);
	lv_obj_set_pos(btn1,60,60);
}