#ifndef _ADC_H_
#define _ADC_H_

#include "sys.h"
#include "main.h"

void  Adc_Init(void);
u16 Get_Adc(u8 ch);
u16 Get_Adc_Average(void);
void Power_show(void);
void About_Init(void);

#endif
