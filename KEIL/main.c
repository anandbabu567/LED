#include <LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "delay.h"
#define LED 7

int main()
{
	IODIR0 = 1<<LED;
	while(1)
	{
		IOSET0 =1<<LED;
		delay_ms(1000);
		IOCLR0 = 1<<LED;
		delay_ms(1000);
	}
}

