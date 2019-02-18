#include "Bsp_LCD.h"
#include "stdlib.h"
//#include "usart.h"	 
#include "delay.h"	 


void Bsp_LCD_Config(void)
{ 	
	vu32 i=0;
	
  GPIO_InitTypeDef  GPIO_InitStructure;
	FSMC_NORSRAMInitTypeDef  FSMC_NORSRAMInitStructure;
  FSMC_NORSRAMTimingInitTypeDef  readWriteTiming; 
	FSMC_NORSRAMTimingInitTypeDef  writeTiming;
	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB | RCC_AHB1Periph_GPIOD | RCC_AHB1Periph_GPIOE | RCC_AHB1Periph_GPIOF | RCC_AHB1Periph_GPIOG, ENABLE);//使能PD,PE,PF,PG时钟  
  RCC_AHB3PeriphClockCmd(RCC_AHB3Periph_FSMC,ENABLE);//使能FSMC时钟  
	
  GPIO_InitStructure.GPIO_Pin = (3<<0)|(3<<4)|(7<<8)|(3<<14);//PD0,1,4,5,8,9,10,14,15 AF OUT
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;//复用输出
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
  GPIO_Init(GPIOD, &GPIO_InitStructure);//初始化  
	
  GPIO_InitStructure.GPIO_Pin = (0X1FF<<7);//PE7~15,AF OUT
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;//复用输出
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
  GPIO_Init(GPIOE, &GPIO_InitStructure);//初始化  

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;//PF12,FSMC_A6
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;//复用输出
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
  GPIO_Init(GPIOD, &GPIO_InitStructure);//初始化  


	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;//PD7,FSMC_CS
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;//复用输出
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
  GPIO_Init(GPIOD, &GPIO_InitStructure);//初始化  


	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;		
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;//复用输出
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;//推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
	GPIO_Init(GPIOD, &GPIO_InitStructure);


  GPIO_PinAFConfig(GPIOD,GPIO_PinSource0,GPIO_AF_FSMC);//PD0,AF12
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource1,GPIO_AF_FSMC);//PD1,AF12
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource8,GPIO_AF_FSMC); 
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource9,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource10,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource14,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource15,GPIO_AF_FSMC);//PD15,AF12
 
  GPIO_PinAFConfig(GPIOE,GPIO_PinSource7,GPIO_AF_FSMC);//PE7,AF12
  GPIO_PinAFConfig(GPIOE,GPIO_PinSource8,GPIO_AF_FSMC);//复用PE8到FSMC输出
  GPIO_PinAFConfig(GPIOE,GPIO_PinSource9,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOE,GPIO_PinSource10,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOE,GPIO_PinSource11,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOE,GPIO_PinSource12,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOE,GPIO_PinSource13,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOE,GPIO_PinSource14,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOE,GPIO_PinSource15,GPIO_AF_FSMC);//PE15,AF12
 
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource4,GPIO_AF_FSMC);
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource5,GPIO_AF_FSMC); 
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource13,GPIO_AF_FSMC);//PF12,AF12
  GPIO_PinAFConfig(GPIOD,GPIO_PinSource7,GPIO_AF_FSMC);

	writeTiming.FSMC_AddressSetupTime = 6;	      //地址建立时间（ADDSET）为9个HCLK =54ns 
  writeTiming.FSMC_AddressHoldTime = 0x00;	 //地址保持时间（A		
  writeTiming.FSMC_DataSetupTime = 6;		 //数据保存时间为6ns*9个HCLK=54ns
  writeTiming.FSMC_BusTurnAroundDuration = 0x00;
  writeTiming.FSMC_CLKDivision = 0x00;
  writeTiming.FSMC_DataLatency = 0x00;
  writeTiming.FSMC_AccessMode = FSMC_AccessMode_B;	 //模式A 

 
  FSMC_NORSRAMInitStructure.FSMC_Bank = FSMC_Bank1_NORSRAM1;//  这里我们使用NE4 ，也就对应BTCR[6],[7]。
  FSMC_NORSRAMInitStructure.FSMC_DataAddressMux = FSMC_DataAddressMux_Disable; // 不复用数据地址
  FSMC_NORSRAMInitStructure.FSMC_MemoryType =FSMC_MemoryType_SRAM;// FSMC_MemoryType_SRAM;  //SRAM   
  FSMC_NORSRAMInitStructure.FSMC_MemoryDataWidth = FSMC_MemoryDataWidth_16b;//存储器数据宽度为16bit   
  FSMC_NORSRAMInitStructure.FSMC_BurstAccessMode =FSMC_BurstAccessMode_Disable;// FSMC_BurstAccessMode_Disable; 
  FSMC_NORSRAMInitStructure.FSMC_WaitSignalPolarity = FSMC_WaitSignalPolarity_Low;
	FSMC_NORSRAMInitStructure.FSMC_AsynchronousWait=FSMC_AsynchronousWait_Disable; 
  FSMC_NORSRAMInitStructure.FSMC_WrapMode = FSMC_WrapMode_Disable;   
  FSMC_NORSRAMInitStructure.FSMC_WaitSignalActive = FSMC_WaitSignalActive_BeforeWaitState;  
  FSMC_NORSRAMInitStructure.FSMC_WriteOperation = FSMC_WriteOperation_Enable;	//  存储器写使能
  FSMC_NORSRAMInitStructure.FSMC_WaitSignal = FSMC_WaitSignal_Disable;   
  FSMC_NORSRAMInitStructure.FSMC_ExtendedMode = FSMC_ExtendedMode_Enable; // 读写使用不同的时序
  FSMC_NORSRAMInitStructure.FSMC_WriteBurst = FSMC_WriteBurst_Disable; 
  FSMC_NORSRAMInitStructure.FSMC_ReadWriteTimingStruct = &readWriteTiming; //读写时序
  FSMC_NORSRAMInitStructure.FSMC_WriteTimingStruct = &writeTiming;  //写时序

  FSMC_NORSRAMInit(&FSMC_NORSRAMInitStructure);  //初始化FSMC配置

  FSMC_NORSRAMCmd(FSMC_Bank1_NORSRAM1, ENABLE);  // 使能BANK1 
}  

void Bsp_LCD_WriteComm(__IO uint16_t  regval)
{   
	Bsp_LCD->LCD_REG = regval;//写入要写的寄存器序号	 
}

void Bsp_LCD_WriteData(__IO uint16_t  data)
{	  
	Bsp_LCD->LCD_RAM = data;		 
}		   

static void Delay(__IO u32 nCount)
{	
	volatile int i;
	for(i=0;i<0XFFFF;i++)
    for(; nCount != 0; nCount--);
	return ;
}  

  
static void Bsp_LCD_Rst(void)
{			
    Clr_Rst;
    Delay(10000);					   
    Set_Rst;		 	 
    Delay(10000);	
}

/************************************************
函数名：Lcd写开始函数
功能：控制Lcd控制引脚 执行写操作
************************************************/
void Bsp_LCD_WR_Start(void)
{
	Bsp_LCD->LCD_REG = 0x2C;
}

void Bsp_LCD_Init(void)
{ 	
	Bsp_LCD_Config();
	Bsp_LCD_Rst();
	
	Delay(120); 
	/*******************************************************************/
	Bsp_LCD_WriteComm(0x11);
	
	Delay(120); 
//	WriteComm(0x13);
	Bsp_LCD_WriteComm(0xD0);
	Bsp_LCD_WriteData(0x07);
	Bsp_LCD_WriteData(0x41);
	Bsp_LCD_WriteData(0x1f);

	Bsp_LCD_WriteComm(0xD1);
	Bsp_LCD_WriteData(0x00);
	Bsp_LCD_WriteData(0x20);
	Bsp_LCD_WriteData(0x0d);

	Bsp_LCD_WriteComm(0xD2);
	Bsp_LCD_WriteData(0x03);
	Bsp_LCD_WriteData(0x00);

  Bsp_LCD_WriteComm(0xC0);
	Bsp_LCD_WriteData(0x10);
	Bsp_LCD_WriteData(0x3B);
	Bsp_LCD_WriteData(0x00);
	Bsp_LCD_WriteData(0x02);
	Bsp_LCD_WriteData(0x11);

	Bsp_LCD_WriteComm(0xC5);
	Bsp_LCD_WriteData(0x02);

  Bsp_LCD_WriteComm(0xC8);
	Bsp_LCD_WriteData(0x00);
	Bsp_LCD_WriteData(0x01);
	Bsp_LCD_WriteData(0x20);
	Bsp_LCD_WriteData(0x01);
	Bsp_LCD_WriteData(0x10);
	Bsp_LCD_WriteData(0x0f);
	Bsp_LCD_WriteData(0x74);
	Bsp_LCD_WriteData(0x67);
	Bsp_LCD_WriteData(0x77);
	Bsp_LCD_WriteData(0x50);
	Bsp_LCD_WriteData(0x0f);
	Bsp_LCD_WriteData(0x10);

	Bsp_LCD_WriteComm(0xF8);
	Bsp_LCD_WriteData(0x01);
	
	Bsp_LCD_WriteComm(0xFE);
	Bsp_LCD_WriteData(0x00);
	Bsp_LCD_WriteData(0x02);

	Bsp_LCD_WriteComm(0x2A);
	Bsp_LCD_WriteData(0x00);
	Bsp_LCD_WriteData(0x00);
	Bsp_LCD_WriteData(0x01);
	Bsp_LCD_WriteData(0xDF);

	Bsp_LCD_WriteComm(0x2B);
	Bsp_LCD_WriteData(0x00);
	Bsp_LCD_WriteData(0x00);
	Bsp_LCD_WriteData(0x01);
	Bsp_LCD_WriteData(0x3f);

	Bsp_LCD_WriteComm(0x36);
	Bsp_LCD_WriteData(0x2b);/*C8?? */
	
	Bsp_LCD_WriteComm(0x3a);
	Bsp_LCD_WriteData(0X55);

	Delay(120); 
	Bsp_LCD_WriteComm(0x29);
	Delay(120); 
	Bsp_LCD_WR_Start();
	delay_ms(50);
}

/**********************************************
函数名：Lcd块选函数
功能：选定Lcd上指定的矩形区域

注意：xStart、yStart、Xend、Yend随着屏幕的旋转而改变，位置是矩形框的四个角

入口参数：xStart x方向的起始点
          ySrart y方向的起始点
          Xend   y方向的终止点
          Yend   y方向的终止点
返回值：无
***********************************************/
void Bsp_LCD_SetWindows(u16 Xstart,u16 Ystart,u16 Xend,u16 Yend) 
{
	Bsp_LCD_WriteComm(0x2A);
	Bsp_LCD_WriteData(Xstart>>8);
  Bsp_LCD_WriteData(0xFF&Xstart);                  //设定X坐标
  Bsp_LCD_WriteData(Xend>>8);
	Bsp_LCD_WriteData(0xFF&Xend);

  Bsp_LCD_WriteComm(0x2B);
	Bsp_LCD_WriteData(Ystart>>8);
  Bsp_LCD_WriteData(0xFF&Ystart);                  //设定Y坐标
  Bsp_LCD_WriteData(Yend>>8);
	Bsp_LCD_WriteData(0xFF&Yend);
	
	Bsp_LCD_WR_Start();
}


void Bsp_LCD_SetCursor(uint16_t Xpos, uint16_t Ypos)
{
	Bsp_LCD_WriteComm(0x2A);
	Bsp_LCD_WriteData(Xpos>>8);
  Bsp_LCD_WriteData(0xFF&Xpos);                  //设定X坐标
  Bsp_LCD_WriteData(0x01);
	Bsp_LCD_WriteData(0xDF);

  Bsp_LCD_WriteComm(0x2B);Bsp_LCD_WriteData(Ypos>>8);
  Bsp_LCD_WriteData(0xFF&Ypos);                  //设定Y坐标
  Bsp_LCD_WriteData(0x01);
	Bsp_LCD_WriteData(0x3f);
	
	Bsp_LCD_WR_Start();
}

void Bsp_LCD_SetCursor_ch(uint16_t Xpos, uint16_t Ypos)
{
	Bsp_LCD_WriteComm(0x2A);
	Bsp_LCD_WriteData(Xpos>>8);
  Bsp_LCD_WriteData(0xFF&Xpos);                  //设定X坐标
  Bsp_LCD_WriteData(0x01);
	Bsp_LCD_WriteData(0x3f);

  Bsp_LCD_WriteComm(0x2B);Bsp_LCD_WriteData(Ypos>>8);
  Bsp_LCD_WriteData(0xFF&Ypos);                  //设定Y坐标
  Bsp_LCD_WriteData(0x01);
	Bsp_LCD_WriteData(0xDF);
	
	Bsp_LCD_WR_Start();
}

/**********************************************
函数名：Lcd块选函数
功能：选定Lcd上指定的矩形区域

注意：xStart和 yStart随着屏幕的旋转而改变，位置是矩形框的四个角

入口参数：xStart x方向的起始点
          ySrart y方向的终止点
          xLong 要选定矩形的x方向长度
          yLong  要选定矩形的y方向长度
返回值：无
***********************************************/
void Bsp_LCD_ColorBox(u16 XStart,u16 YStart,u16 XSize,u16 YSize,u16 Color)
{
	u32 Temp;
	Bsp_LCD_SetWindows(XStart,YStart,XStart+XSize-1,YStart+YSize-1);
	Temp = XSize*YSize;
	while(Temp--)
		Bsp_LCD->LCD_RAM = Color;
	
	Bsp_LCD_WR_Start();
}


void Bsp_LCD_Refresh(u16 x0,u16 y0,u16 x1,u16 y1,u16 Color)
{	
	u16 i=0,j = 0;
	Bsp_LCD_SetWindows(x0,y0,x1-1,y1-1);
	for(i = 0;i < x1 - x0;i++)
	{
		for(j = 0;j < y1 - y0;j++)
		{
			Bsp_LCD->LCD_RAM = Color;
		}
	}
	Bsp_LCD_WR_Start();
}




























