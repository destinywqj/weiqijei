#ifndef __KEY_H
#define __KEY_H
#define __LED0
#define __LED1
#include "sys.h"
#define KEY0 GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4)//��ȡ���� 0
#define KEY1 GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_3)//��ȡ���� 1
#define WK_UP GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)//��ȡ���� 2 
#define KEY0_PRES 1 //KEY0 
#define KEY1_PRES 2 //KEY1 
#define WKUP_PRES 3 //WK_UP 
#endif
void KEY_Init(void);//IO ��ʼ��
u8 KEY_Scan(u8 mode); //����ɨ�躯��
