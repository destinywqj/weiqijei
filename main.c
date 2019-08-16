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
delay_init(); //延时函数初始化
LED_Init(); //初始化与 LED 连接的硬件接口
KEY_Init(); //初始化与按键连接的硬件接口
LED0=0; //点亮 LED
while(1)
{
key=KEY_Scan(0); //得到键值
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
