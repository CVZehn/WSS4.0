#ifndef _Bsp_LCD_H_
#define _Bsp_LCD_H_

#include "stm32f4xx.h"

    
//LCD��ַ�ṹ��
typedef struct
{
	__IO uint16_t LCD_REG;
	__IO uint16_t LCD_RAM;
} LCD_TypeDef;


//ʹ��NOR/SRAM�� Bank1.sector4,��ַλHADDR[27,26]=11 A6��Ϊ�������������� 
//ע������ʱSTM32�ڲ�������һλ����! 111 1110=0X7E			    
#define LCD_BASE        ((u32)(0x60000000 | 0x0007FFFE))
#define Bsp_LCD         ((LCD_TypeDef *) LCD_BASE)
//////////////////////////////////////////////////////////////////////////////////
	 

#define Set_Rst GPIO_SetBits(GPIOD, GPIO_Pin_2);
#define Clr_Rst GPIO_ResetBits(GPIOD, GPIO_Pin_2);

//������ɫ
#define WHITE         	 0xFFFF
#define BLACK         	 0x0000	  
#define BLUE         	 0x001F  
#define BRED             0XF81F
#define GRED 			 0XFFE0
#define GBLUE			 0X07FF
#define RED           	 0xF800
#define MAGENTA       	 0xF81F
#define GREEN         	 0x07E0
#define CYAN          	 0x7FFF
#define YELLOW        	 0xFFE0
#define BROWN 			 0XBC40 //��ɫ
#define BRRED 			 0XFC07 //�غ�ɫ
#define GRAY  			 0X8430 //��ɫ
//GUI��ɫ

#define DARKBLUE      	 0X01CF	//����ɫ
#define LIGHTBLUE      	 0X7D7C	//ǳ��ɫ  
#define GRAYBLUE       	 0X5458 //����ɫ
//������ɫΪPANEL����ɫ 
 
#define LIGHTGREEN     	 0X841F //ǳ��ɫ
//#define LIGHTGRAY        0XEF5B //ǳ��ɫ(PANNEL)
#define LGRAY 			 0XC618 //ǳ��ɫ(PANNEL),���屳��ɫ

#define LGRAYBLUE        0XA651 //ǳ����ɫ(�м����ɫ)
#define LBBLUE           0X2B12 //ǳ����ɫ(ѡ����Ŀ�ķ�ɫ)


void Bsp_LCD_Init(void);
void Bsp_LCD_WriteComm(__IO uint16_t regval);

void Bsp_LCD_WriteData(__IO uint16_t data);

void Bsp_LCD_ColorBox(u16 XStart,u16 YStart,u16 XSize,u16 YSize,u16 Color);
void Bsp_LCD_Refresh(u16 x0,u16 y0,u16 x1,u16 y1,u16 Color);
void Bsp_LCD_SetWindows(u16 Xstart,u16 Ystart,u16 Xend,u16 Yend);
void Bsp_LCD_SetCursor(uint16_t Xpos, uint16_t Ypos);
void Bsp_LCD_SetCursor_ch(uint16_t Xpos, uint16_t Ypos);
void BrushesPanel(u16 x,u16 y,u16 x_size,u16 y_size);
void Bsp_LCD_WR_Start(void);	   						   																			 



#endif  
	 
	 



