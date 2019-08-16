#include "led.h"
#include "delay.h"
#include "sys.h"
#include "key.h"

int main(void)
{
	u8 key=0;
	u16 a,b,i,j;
	a=5200;
	b=4800;
delay_init(); //��ʱ������ʼ��
LED_Init(); //��ʼ���� LED ���ӵ�Ӳ���ӿ�
KEY_Init(); //��ʼ���밴�����ӵ�Ӳ���ӿ�
LED0=0; //���� LED
while(1)
{
key=KEY_Scan(0); //�õ���ֵ
switch(key)
{
case KEY0_PRES:
while(1){
GPIO_SetBits(GPIOB,GPIO_Pin_5);
GPIO_ResetBits(GPIOE,GPIO_Pin_5);
delay_ms(300);
GPIO_ResetBits(GPIOB,GPIO_Pin_5);
GPIO_SetBits(GPIOE,GPIO_Pin_5);
delay_ms(300);
}
break;
case KEY1_PRES:
 


	while(1)
	{
		key=KEY_Scan(0);
		if(key)
		{
			for(j=0;j<1000;j++)
			{
				for(i=0;i<=a;i++)
				{
					LED0=0;
					delay(i);
					LED0=1;
					delay(a-i);
					if(key==0)
						break;
				}
				for(i=0;i<b;i++)
				{
					 LED0=0;
					 delay(b-i);
					 LED0=1;
					 delay(i);
					 if(key==0)
					   break;
				 }
		   }
		 }
	 }
break;
case WKUP_PRES:
LED0=!LED0;
LED1=!LED1;
break;
default:
delay_ms(10);
} 
} }
