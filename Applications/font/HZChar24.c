#include "../lvgl/lv_misc/lv_font.h"
#include "HZCharPEx.h"

#ifdef USING_CN_24_CHAR
/* ������Ϣ����������Ҫ���� */
const paCharsInfo_t FontCn24 = 
{
    {12, 24, 2},
    {24, 24, 3},
};

#ifdef USE_CN_INT_LIB
/* ��Ҫ������ģ����������Ӻ��֣�Ȼ���������Ӧ�ĵط�������ģ */
const CnChar_t HanZi24Index[] = 
{   
    "��",
    "��",
    "ȷ",
    "��",
    "��",
    "��",
    "δ",
    "��",
    "��",
    "��",
    "ͼ",
    "��",
};

/* ��������������ģ����Ҫ�����溺�ֵ�λ�ö�Ӧ�� */
const Cn24Data_t HanZi24Data[] =
{
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC3,0x00,0x00,0xC3,0x00,0x00,0x4F,0xF0,0x1F,
    0xF2,0x00,0x00,0x44,0x00,0x00,0x0C,0x00,0x00,0x38,0x00,0x01,0xC1,0x80,0x04,0x33,
    0x00,0x03,0x34,0x00,0x01,0x38,0x00,0x00,0x3F,0xC0,0x1F,0xF0,0x00,0x00,0xE8,0x00,
    0x00,0xA4,0x00,0x03,0x23,0x00,0x06,0x21,0xC0,0x08,0x20,0xF0,0x30,0x20,0x7C,0x00,
    0x20,0x00,0x00,0x20,0x00,0x00,0x00,0x00,/*"��",0*/
    0x00,0x00,0x00,0x00,0x02,0x00,0x01,0x83,0x00,0x00,0xC2,0x00,0x00,0x44,0x00,0x00,
    0x04,0x80,0x06,0x3F,0xE0,0x03,0xD8,0xC0,0x03,0x14,0xC0,0x01,0x7C,0x80,0x01,0x11,
    0x80,0x01,0x1F,0x00,0x01,0xF0,0x00,0x00,0x10,0x00,0x00,0x17,0xF8,0x3F,0xF8,0x00,
    0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,
    0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,/*"��",1*/ 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x03,0x20,0x00,
    0xE2,0xF8,0x0F,0x85,0x20,0x01,0x04,0x40,0x03,0x18,0xA0,0x02,0x01,0xF8,0x02,0x1F,
    0x98,0x07,0xC9,0x88,0x0C,0xC8,0xE8,0x0C,0x8B,0x88,0x15,0x88,0x88,0x26,0x09,0xE8,
    0x44,0x16,0x88,0x00,0x10,0x88,0x00,0x10,0x88,0x00,0x20,0x88,0x00,0x40,0x38,0x00,
    0x00,0x18,0x00,0x00,0x10,0x00,0x00,0x00,/*"ȷ",0*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x18,0x00,0x00,
    0x01,0x80,0x04,0x1E,0xE0,0x07,0xE0,0x70,0x0C,0x00,0x80,0x0C,0x00,0x00,0x08,0x1E,
    0x00,0x01,0xF0,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x01,0xBF,0x00,0x03,0x30,0x00,
    0x02,0xB0,0x00,0x06,0x70,0x00,0x04,0x10,0x00,0x08,0x0C,0x00,0x10,0x07,0xE0,0x00,
    0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",1*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x0C,0x03,0x80,0x07,
    0x3C,0x00,0x03,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0xC0,0x04,0x13,0xC0,0x3E,0x1C,
    0xC0,0x04,0x10,0x80,0x04,0x30,0x80,0x04,0x23,0x80,0x04,0x61,0xC0,0x04,0x46,0x70,
    0x04,0x8C,0x10,0x04,0x00,0x00,0x7F,0x80,0x00,0x00,0x70,0x00,0x00,0x1F,0xFE,0x00,
    0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",2*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x07,0xF0,0x1F,0xF8,0x38,0x08,0x00,0x38,0x08,0x00,0x10,0x0C,0x1F,0x30,0x0C,0xE2,
    0x30,0x0C,0x42,0x30,0x04,0x46,0x30,0x04,0x7C,0x30,0x04,0x40,0x30,0x04,0x00,0x20,
    0x04,0x3F,0x60,0x07,0xC0,0xE0,0x04,0x00,0x60,0x00,0x00,0x40,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",3*/ 
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x10,0x00,0x00,
    0x12,0x00,0x00,0x1E,0x00,0x00,0xF0,0x00,0x00,0x30,0x80,0x00,0x3F,0x80,0x00,0xF0,
    0x00,0x1F,0x30,0x00,0x00,0x78,0x00,0x00,0x7C,0x00,0x00,0xB6,0x00,0x01,0xB3,0x00,
    0x03,0x31,0xC0,0x06,0x30,0xF0,0x08,0x30,0x7C,0x30,0x30,0x00,0x00,0x30,0x00,0x00,
    0x30,0x00,0x00,0x30,0x00,0x00,0x00,0x00,/*"δ",0*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x04,0x00,0x04,
    0x0B,0xC0,0x06,0x7C,0x00,0x02,0x18,0x00,0x00,0x16,0x00,0x00,0x32,0x00,0x00,0x2F,
    0xC0,0x0E,0x72,0x00,0x14,0x02,0x00,0x04,0x03,0xFC,0x04,0xFE,0x00,0x04,0x02,0x00,
    0x04,0x02,0x00,0x04,0x02,0x00,0x1F,0x02,0x00,0x30,0xF0,0x00,0x00,0x0F,0xFC,0x00,
    0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",1*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x03,0x03,0x00,0x03,0x01,0x80,0x03,
    0x00,0x00,0x02,0x00,0xF0,0x02,0x0F,0xC0,0x03,0x80,0xC0,0x1E,0x08,0x80,0x02,0x04,
    0x80,0x02,0x01,0x78,0x03,0x9F,0x80,0x06,0x06,0x00,0x0E,0x04,0x3C,0x3A,0xFF,0xC0,
    0x63,0x08,0x80,0x03,0x0D,0x80,0x03,0x03,0x80,0x07,0x02,0xE0,0x06,0x0C,0x30,0x02,
    0x30,0x18,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",2*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x03,
    0xEE,0x00,0x00,0x0C,0x00,0x00,0x08,0x00,0x08,0x18,0x00,0x0C,0x10,0x00,0x0C,0x78,
    0x00,0x0F,0x80,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x08,
    0x08,0x00,0x08,0x0C,0x00,0x18,0x04,0x00,0x38,0x03,0xEF,0xF0,0x00,0xFF,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"��",3*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x03,0x81,0xC0,0x06,
    0x00,0xE0,0x1C,0x00,0x38,0x30,0x00,0x0C,0x40,0x7E,0x02,0x01,0xC3,0x80,0x07,0x00,
    0xE0,0x0C,0x00,0x30,0x10,0x00,0x08,0x00,0x7E,0x00,0x01,0xC3,0x80,0x03,0x00,0xC0,
    0x06,0x00,0x60,0x00,0x3C,0x00,0x00,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x18,0x00,0x00,0x18,0x00,0x00,0x00,0x00,/*"C:\Users\zhush\Desktop\PX{$WW])I2V88NN_%2@~$OB.bmp",0*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x08,0x08,0x00,0x10,0x04,
    0x00,0x20,0x02,0x00,0x40,0x01,0x00,0x80,0x00,0x81,0x00,0x00,0x42,0x00,0x00,0x24,
    0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x00,0x24,0x00,0x00,0x42,0x00,0x00,0x81,0x00,
    0x01,0x00,0x80,0x02,0x00,0x40,0x04,0x00,0x20,0x08,0x00,0x10,0x10,0x00,0x08,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C:\Users\zhush\Desktop\PX{$WW])I2V88NN_%2@~$OB.bmp",0*/
};
#endif
#ifdef USE_ASCII_INT_LIB
const unsigned char ASCII12x24[] =
{    
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*" ",32*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,
    0x07,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"!",33*/
    0x00,0x00,0x00,0x00,0x06,0x60,0x06,0x60,0x0C,0xC0,0x19,0x80,0x11,0x00,0x22,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*""",34*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x40,0x10,0x40,0x10,0x40,
    0x10,0x40,0x7F,0xE0,0x7F,0xE0,0x10,0x40,0x10,0x40,0x20,0x80,0x20,0x80,0x7F,0xE0,
    0x7F,0xE0,0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"#",35*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x0F,0x80,0x1A,0xC0,0x32,0xC0,
    0x32,0xC0,0x32,0x00,0x1A,0x00,0x0E,0x00,0x07,0x00,0x03,0x80,0x03,0x80,0x02,0xC0,
    0x32,0xC0,0x32,0xC0,0x32,0xC0,0x12,0x80,0x0F,0x00,0x02,0x00,0x02,0x00,0x00,0x00,/*"$",36*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0xC0,0x50,0x80,0x88,0x80,
    0x89,0x00,0x89,0x00,0x8B,0x00,0x8A,0x00,0x5F,0xC0,0x75,0x40,0x06,0x20,0x0A,0x20,
    0x0A,0x20,0x1A,0x20,0x12,0x20,0x11,0x40,0x21,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"%",37*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x26,0x00,0x26,0x00,
    0x26,0x00,0x26,0x00,0x25,0xC0,0x38,0x80,0x30,0x80,0x58,0x80,0x49,0x00,0xCD,0x00,
    0xC7,0x00,0xC6,0x00,0xC3,0x00,0x65,0x20,0x38,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"&",38*/
    0x00,0x00,0x00,0x00,0x30,0x00,0x38,0x00,0x08,0x00,0x08,0x00,0x10,0x00,0x60,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"'",39*/
    0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x80,0x01,0x00,0x03,0x00,
    0x03,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,
    0x03,0x00,0x03,0x00,0x01,0x00,0x01,0x80,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x00,/*"(",40*/
    0x00,0x00,0x00,0x00,0x40,0x00,0x20,0x00,0x10,0x00,0x18,0x00,0x08,0x00,0x0C,0x00,
    0x0C,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,
    0x0C,0x00,0x0C,0x00,0x08,0x00,0x18,0x00,0x10,0x00,0x20,0x00,0x40,0x00,0x00,0x00,/*")",41*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,
    0x02,0x00,0x72,0x70,0x3A,0xE0,0x0F,0x80,0x0F,0x80,0x3A,0xE0,0x72,0x70,0x02,0x00,
    0x02,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"*",42*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,
    0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x7F,0xF0,0x02,0x00,0x02,0x00,0x02,0x00,
    0x02,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"+",43*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x30,0x00,0x38,0x00,0x08,0x00,0x08,0x00,0x10,0x00,0x60,0x00,/*",",44*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"-",45*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*".",46*/
    0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x60,0x00,0x40,0x00,0xC0,0x00,0x80,0x00,0x80,
    0x01,0x00,0x01,0x00,0x02,0x00,0x02,0x00,0x06,0x00,0x04,0x00,0x04,0x00,0x08,0x00,
    0x08,0x00,0x10,0x00,0x10,0x00,0x30,0x00,0x20,0x00,0x60,0x00,0x40,0x00,0x00,0x00,/*"/",47*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x80,0x30,0xC0,
    0x30,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
    0x60,0x60,0x30,0xC0,0x30,0xC0,0x19,0x80,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"0",48*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x3E,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"1",49*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x21,0x80,0x40,0xC0,
    0x60,0xC0,0x60,0xC0,0x00,0xC0,0x01,0x80,0x01,0x80,0x03,0x00,0x04,0x00,0x08,0x00,
    0x10,0x40,0x20,0x40,0x40,0x40,0x7F,0xC0,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"2",50*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x23,0x00,0x61,0x80,
    0x61,0x80,0x61,0x80,0x01,0x80,0x03,0x00,0x0E,0x00,0x01,0x80,0x00,0x80,0x00,0xC0,
    0x60,0xC0,0x60,0xC0,0x60,0xC0,0x21,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"3",51*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x01,0x80,0x03,0x80,0x03,0x80,
    0x05,0x80,0x09,0x80,0x09,0x80,0x11,0x80,0x21,0x80,0x21,0x80,0x41,0x80,0x7F,0xE0,
    0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,/*"4",52*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x3F,0xC0,0x20,0x00,
    0x20,0x00,0x20,0x00,0x20,0x00,0x2F,0x00,0x31,0x80,0x20,0xC0,0x00,0xC0,0x00,0xC0,
    0x60,0xC0,0x60,0xC0,0x41,0x80,0x21,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"5",53*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x18,0xC0,0x30,0xC0,
    0x30,0x00,0x20,0x00,0x60,0x00,0x67,0x80,0x68,0xC0,0x70,0x60,0x60,0x60,0x60,0x60,
    0x60,0x60,0x20,0x60,0x30,0x40,0x18,0xC0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"6",54*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x3F,0xE0,0x30,0x40,
    0x20,0x80,0x20,0x80,0x00,0x80,0x01,0x00,0x01,0x00,0x02,0x00,0x02,0x00,0x02,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"7",55*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x30,0xC0,0x60,0x60,
    0x60,0x60,0x60,0x60,0x70,0x40,0x3C,0xC0,0x0F,0x00,0x33,0x80,0x20,0xC0,0x60,0x60,
    0x60,0x60,0x60,0x60,0x60,0x60,0x30,0xC0,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"8",56*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x30,0x80,0x30,0xC0,
    0x60,0x40,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xE0,0x31,0x60,0x1E,0x60,0x00,0x60,
    0x00,0xC0,0x00,0xC0,0x30,0x80,0x31,0x80,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"9",57*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*":",58*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x02,0x00,0x04,0x00,0x00,0x00,/*";",59*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x00,
    0x02,0x00,0x04,0x00,0x08,0x00,0x10,0x00,0x20,0x00,0x10,0x00,0x08,0x00,0x04,0x00,
    0x02,0x00,0x01,0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,/*"<",60*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"=",61*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x10,0x00,0x08,0x00,0x04,0x00,
    0x02,0x00,0x01,0x00,0x00,0x80,0x00,0x40,0x00,0x20,0x00,0x40,0x00,0x80,0x01,0x00,
    0x02,0x00,0x04,0x00,0x08,0x00,0x10,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*">",62*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x80,0x30,0xC0,0x40,0x60,0x40,0x60,
    0x60,0x60,0x60,0x60,0x00,0xC0,0x01,0x80,0x06,0x00,0x04,0x00,0x04,0x00,0x04,0x00,
    0x00,0x00,0x00,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"?",63*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x1C,0x60,0x10,0x20,
    0x33,0x50,0x26,0xD0,0x64,0x90,0x64,0x90,0x68,0x90,0x68,0x90,0x69,0x90,0x69,0xA0,
    0x66,0xC0,0x30,0x10,0x30,0x20,0x18,0x40,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"@",64*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x0E,0x00,
    0x0B,0x00,0x0B,0x00,0x13,0x00,0x11,0x80,0x11,0x80,0x11,0x80,0x1F,0x80,0x20,0xC0,
    0x20,0xC0,0x20,0xC0,0x20,0x60,0x60,0x60,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,/*"A",65*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x61,0x80,0x60,0xC0,
    0x60,0xC0,0x60,0xC0,0x60,0xC0,0x61,0x80,0x7F,0x00,0x60,0xC0,0x60,0x40,0x60,0x60,
    0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xC0,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"B",66*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x18,0x60,0x30,0x20,
    0x30,0x20,0x20,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,
    0x60,0x20,0x30,0x20,0x30,0x40,0x18,0x80,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"C",67*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x61,0x80,0x60,0xC0,
    0x60,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
    0x60,0x60,0x60,0xC0,0x60,0xC0,0x63,0x80,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"D",68*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xC0,0x60,0x40,0x60,0x20,
    0x60,0x00,0x60,0x00,0x61,0x00,0x61,0x00,0x7F,0x00,0x61,0x00,0x61,0x00,0x60,0x00,
    0x60,0x00,0x60,0x20,0x60,0x20,0x60,0x40,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"E",69*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xC0,0x60,0xC0,0x60,0x20,
    0x60,0x20,0x60,0x00,0x61,0x00,0x61,0x00,0x7F,0x00,0x61,0x00,0x61,0x00,0x60,0x00,
    0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"F",70*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x40,0x18,0xC0,0x30,0x40,
    0x30,0x40,0x20,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x63,0xF0,0x60,0xC0,
    0x60,0xC0,0x30,0xC0,0x30,0xC0,0x18,0xC0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"G",71*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x60,0x60,0x60,0x60,
    0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7F,0xE0,0x60,0x60,0x60,0x60,0x60,0x60,
    0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,/*"H",72*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x06,0x00,0x06,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"I",73*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF0,0x01,0x80,0x01,0x80,
    0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
    0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x61,0x80,0x63,0x00,0x3E,0x00,/*"J",74*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF3,0xE0,0x60,0x80,0x61,0x00,
    0x62,0x00,0x62,0x00,0x64,0x00,0x6C,0x00,0x7C,0x00,0x76,0x00,0x67,0x00,0x63,0x00,
    0x63,0x80,0x61,0x80,0x60,0xC0,0x60,0xE0,0xF1,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,/*"K",75*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x60,0x00,0x60,0x00,
    0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,
    0x60,0x00,0x60,0x20,0x60,0x20,0x60,0x40,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"L",76*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x70,0xE0,0x70,0xE0,
    0x70,0xE0,0x59,0x60,0x59,0x60,0x59,0x60,0x59,0x60,0x5A,0x60,0x4E,0x60,0x4E,0x60,
    0x4E,0x60,0x4E,0x60,0x44,0x60,0x44,0x60,0xE4,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,/*"M",77*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x70,0x70,0x20,0x70,0x20,
    0x58,0x20,0x58,0x20,0x4C,0x20,0x46,0x20,0x46,0x20,0x43,0x20,0x43,0x20,0x41,0xA0,
    0x40,0xE0,0x40,0xE0,0x40,0x60,0x40,0x60,0xE0,0x20,0x00,0x00,0x00,0x00,0x00,0x00,/*"N",78*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x80,0x30,0xC0,
    0x30,0x40,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
    0x60,0x60,0x30,0x40,0x30,0xC0,0x19,0x80,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"O",79*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x60,0xC0,0x60,0x60,
    0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xC0,0x7F,0x80,0x60,0x00,0x60,0x00,
    0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"P",80*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x80,0x30,0xC0,
    0x30,0x40,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
    0x6E,0x60,0x32,0x40,0x31,0xC0,0x11,0x80,0x0F,0x80,0x01,0xE0,0x00,0xC0,0x00,0x00,/*"Q",81*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x60,0xC0,0x60,0x60,
    0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xC0,0x7F,0x00,0x66,0x00,0x63,0x00,0x63,0x00,
    0x61,0x80,0x61,0x80,0x60,0xC0,0x60,0xC0,0xF0,0x70,0x00,0x00,0x00,0x00,0x00,0x00,/*"R",82*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x20,0x30,0xE0,0x60,0x20,
    0x60,0x20,0x60,0x00,0x70,0x00,0x3C,0x00,0x0F,0x00,0x03,0xC0,0x00,0xC0,0x00,0x60,
    0x40,0x60,0x40,0x60,0x60,0x60,0x70,0xC0,0x4F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"S",83*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x46,0x20,0x86,0x10,
    0x86,0x10,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"T",84*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x70,0x60,0x20,0x60,0x20,
    0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,0x60,0x20,
    0x60,0x20,0x60,0x20,0x60,0x20,0x30,0x40,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"U",85*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF0,0x70,0x60,0x30,0x40,
    0x30,0x40,0x30,0x40,0x30,0x80,0x18,0x80,0x18,0x80,0x18,0x80,0x18,0x80,0x0D,0x00,
    0x0D,0x00,0x0D,0x00,0x0F,0x00,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"V",86*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF7,0x70,0x66,0x20,0x66,0x20,
    0x66,0x40,0x66,0x40,0x67,0x40,0x37,0x40,0x37,0x40,0x3B,0x80,0x3B,0x80,0x3B,0x80,
    0x3B,0x80,0x39,0x80,0x11,0x00,0x11,0x00,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"W",87*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x79,0xE0,0x30,0xC0,0x18,0x80,
    0x18,0x80,0x19,0x00,0x0D,0x00,0x0E,0x00,0x06,0x00,0x06,0x00,0x07,0x00,0x0B,0x00,
    0x0B,0x80,0x19,0x80,0x11,0x80,0x30,0xC0,0x79,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,/*"X",88*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF0,0x70,0x60,0x30,0x40,
    0x30,0x80,0x18,0x80,0x18,0x80,0x0D,0x00,0x0D,0x00,0x0E,0x00,0x06,0x00,0x06,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"Y",89*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xE0,0x20,0xC0,0x41,0xC0,
    0x01,0x80,0x03,0x80,0x03,0x00,0x03,0x00,0x06,0x00,0x06,0x00,0x0C,0x00,0x0C,0x00,
    0x18,0x00,0x18,0x20,0x38,0x20,0x30,0x40,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"Z",90*/
    0x00,0x00,0x00,0x00,0x07,0xE0,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,
    0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,
    0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x07,0xE0,0x00,0x00,/*"[",91*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x10,0x00,0x10,0x00,0x10,0x00,
    0x08,0x00,0x08,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x02,0x00,0x02,0x00,0x01,0x00,
    0x01,0x00,0x01,0x00,0x00,0x80,0x00,0x80,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x20,/*"\",92*/
    0x00,0x00,0x00,0x00,0x3F,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,
    0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,
    0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x3F,0x00,0x00,0x00,/*"]",93*/
    0x00,0x00,0x00,0x00,0x07,0x00,0x0D,0x80,0x10,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"^",94*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF0,/*"_",95*/
    0x00,0x00,0x00,0x00,0x18,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"`",96*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0F,0x80,0x30,0xC0,0x30,0xC0,0x07,0xC0,0x1C,0xC0,0x30,0xC0,
    0x60,0xC0,0x60,0xC0,0x60,0xC0,0x71,0xD0,0x3E,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,/*"a",97*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x70,0x00,0x30,0x00,0x30,0x00,
    0x30,0x00,0x30,0x00,0x33,0x80,0x3C,0xC0,0x38,0x60,0x30,0x60,0x30,0x60,0x30,0x60,
    0x30,0x60,0x30,0x60,0x30,0x40,0x38,0xC0,0x2F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"b",98*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0F,0x00,0x31,0x80,0x31,0x80,0x61,0x80,0x60,0x00,0x60,0x00,
    0x60,0x00,0x60,0x40,0x30,0x40,0x30,0x80,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"c",99*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x01,0xC0,0x00,0xC0,0x00,0xC0,
    0x00,0xC0,0x00,0xC0,0x1E,0xC0,0x31,0xC0,0x30,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,
    0x60,0xC0,0x60,0xC0,0x20,0xC0,0x31,0xE0,0x1E,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"d",100*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x07,0x80,0x18,0xC0,0x10,0x60,0x30,0x60,0x3F,0xE0,0x30,0x00,
    0x30,0x00,0x30,0x00,0x18,0x20,0x1C,0x40,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"e",101*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x06,0x60,0x0C,0x60,
    0x0C,0x00,0x0C,0x00,0x7F,0xC0,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
    0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"f",102*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0F,0x70,0x19,0x90,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x19,0x80,
    0x1F,0x00,0x30,0x00,0x3E,0x00,0x1F,0xC0,0x60,0x60,0x60,0x60,0x70,0xE0,0x1F,0x80,/*"g",103*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x70,0x00,0x30,0x00,0x30,0x00,
    0x30,0x00,0x30,0x00,0x37,0x80,0x38,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,
    0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x79,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,/*"h",104*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x3E,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"i",105*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x01,0x80,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0F,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,
    0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x33,0x00,0x3E,0x00,/*"j",106*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x70,0x00,0x30,0x00,0x30,0x00,
    0x30,0x00,0x30,0x00,0x33,0xC0,0x31,0x00,0x33,0x00,0x32,0x00,0x36,0x00,0x3E,0x00,
    0x3B,0x00,0x33,0x00,0x31,0x80,0x31,0x80,0x79,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,/*"k",107*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x3E,0x00,0x06,0x00,0x06,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,
    0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"l",108*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xEE,0xE0,0x77,0x60,0x66,0x60,0x66,0x60,0x66,0x60,0x66,0x60,
    0x66,0x60,0x66,0x60,0x66,0x60,0x66,0x60,0xF7,0x70,0x00,0x00,0x00,0x00,0x00,0x00,/*"m",109*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x73,0x80,0x3C,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,
    0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x79,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,/*"n",110*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0F,0x00,0x19,0x80,0x30,0xC0,0x60,0x60,0x60,0x60,0x60,0x60,
    0x60,0x60,0x60,0x60,0x30,0xC0,0x30,0xC0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"o",111*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x77,0x80,0x38,0xC0,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x60,
    0x30,0x60,0x30,0x60,0x30,0xC0,0x38,0xC0,0x37,0x80,0x30,0x00,0x30,0x00,0x7C,0x00,/*"p",112*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1E,0x40,0x31,0xC0,0x30,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,
    0x60,0xC0,0x60,0xC0,0x20,0xC0,0x31,0xC0,0x1E,0xC0,0x00,0xC0,0x00,0xC0,0x03,0xE0,/*"q",113*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xF9,0xE0,0x1A,0x60,0x1C,0x00,0x18,0x00,0x18,0x00,0x18,0x00,
    0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"r",114*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x0F,0xE0,0x18,0x60,0x30,0x20,0x30,0x00,0x1C,0x00,0x0F,0x80,
    0x01,0xC0,0x20,0x60,0x20,0x60,0x30,0xC0,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"s",115*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x04,0x00,
    0x0C,0x00,0x0C,0x00,0x7F,0x80,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
    0x0C,0x00,0x0C,0x00,0x0C,0x40,0x0C,0x40,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"t",116*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x10,0x40,0x71,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,0x30,0xC0,
    0x30,0xC0,0x30,0xC0,0x30,0xC0,0x39,0xE0,0x1E,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"u",117*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x7C,0xF0,0x38,0x60,0x18,0x40,0x18,0x40,0x0C,0x80,0x0C,0x80,
    0x0C,0x80,0x07,0x00,0x07,0x00,0x07,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"v",118*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xF7,0xB0,0x63,0x20,0x63,0x20,0x67,0x20,0x37,0x20,0x35,0xC0,
    0x39,0xC0,0x39,0xC0,0x39,0xC0,0x10,0x80,0x10,0x80,0x00,0x00,0x00,0x00,0x00,0x00,/*"w",119*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x7D,0xE0,0x18,0x80,0x19,0x80,0x0D,0x00,0x0E,0x00,0x06,0x00,
    0x07,0x00,0x0B,0x00,0x19,0x80,0x11,0xC0,0x7B,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,/*"x",120*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x7D,0xE0,0x38,0x80,0x18,0x80,0x18,0x80,0x0D,0x00,0x0D,0x00,
    0x0D,0x00,0x06,0x00,0x06,0x00,0x02,0x00,0x04,0x00,0x04,0x00,0x28,0x00,0x38,0x00,/*"y",121*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x3F,0xC0,0x21,0x80,0x23,0x80,0x03,0x00,0x07,0x00,0x06,0x00,
    0x0E,0x00,0x0C,0x20,0x1C,0x20,0x18,0x60,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,/*"z",122*/
    0x00,0x00,0x00,0x00,0x00,0xC0,0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,
    0x01,0x00,0x01,0x00,0x01,0x00,0x03,0x00,0x04,0x00,0x03,0x00,0x01,0x00,0x01,0x00,
    0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x80,0x00,0xC0,0x00,0x00,/*"{",123*/
    0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,
    0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,
    0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,/*"|",124*/
    0x00,0x00,0x00,0x00,0x30,0x00,0x18,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,
    0x08,0x00,0x08,0x00,0x08,0x00,0x0C,0x00,0x02,0x00,0x0C,0x00,0x08,0x00,0x08,0x00,
    0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x18,0x00,0x30,0x00,0x00,0x00,/*"}",125*/
    0x00,0x00,0x38,0x00,0x24,0x00,0x42,0x10,0x41,0x20,0x00,0xE0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"~",126*/
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xF8,0x00,0x88,0x00,0x88,0x00,0x88,0x00,0x88,0x00,0x88,0x00,0x88,0x00,
    0x88,0x00,0x88,0x00,0x88,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"",127*/
};
#endif /* USING_CN_24_CHAR */

lv_font_t HZChar_24 =
    {
#if defined USE_GBK_LIB_FONT == 1
        .unicode_first = 0x8140,                     /*First Unicode letter in this font*/
        .unicode_last = 0xfefe,                      /*Last Unicode letter in this font*/
#elif defined USE_GB2312_LIB_FONT == 1
        .unicode_first = 0xA1A1,                     /*First Unicode letter in this font*/
        .unicode_last = 0xfefe,                      /*Last Unicode letter in this font*/
#else
        .unicode_first = 0x20,                     /*First Unicode letter in this font*/
        .unicode_last = 0x7f,                      /*Last Unicode letter in this font*/
#endif
        .h_px = 24,                                  /*Font height in pixels*/
        .glyph_bitmap = HanZi24Data,             /*Bitmap of glyphs*/
        .glyph_dsc = (void *)&FontCn24,             /*Description of glyphs*/
        .unicode_list = NULL,                        /*List of unicode characters*/
        .get_bitmap = lv_hzPEx_font_get_bitmap_continuous, /*Function pointer to get glyph's bitmap*/
        .get_width = lv_hzPEx_font_get_width_continuous,   /*Function pointer to get glyph's width*/
        .bpp = 1, /*Bit per pixel*/
        .next_page = 0, /*Pointer to a font extension*/
};
#endif    