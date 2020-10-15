#include<lpc214x.h>
void delay(unsigned int);
int main(void)
{
	IO1DIR=0xFFFFFFFF;
	while(1)
	{
	  IO0SET=0x00000001;
		IO0CLR=(0x00000002|0x00000004|0x00000008);
	  delay(500);
		IO0SET=0x00000004;
		IO0CLR=(0x00000002|0x00000001|0x00000008); 
		delay(500);
		IO0SET=0x00000002;
		IO0CLR=(0x00000001|0x00000004|0x00000008);
		delay(500);
    
		IO0SET=0x00000008;
		IO0CLR=(0x00000002|0x00000004|0x00000001);
		delay(500);
	}
}
void delay(unsigned int count)
{
for(int i=count;i>0;i--)
	{
		for(int j=0;j<count;j++);
	}
}
