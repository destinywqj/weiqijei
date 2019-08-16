#ifndef __KEY_H
#define __KEY_H
#define __LED0
#define __LED1
#include "sys.h"
#define KEY0 GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4)//读取按键 0
#define KEY1 GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_3)//读取按键 1
#define WK_UP GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)//读取按键 2 
#define KEY0_PRES 1 //KEY0 
#define KEY1_PRES 2 //KEY1 
#define WKUP_PRES 3 //WK_UP 
#endif
void KEY_Init(void);//IO 初始化
u8 KEY_Scan(u8 mode); //按键扫描函数
