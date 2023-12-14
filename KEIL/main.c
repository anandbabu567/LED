#include <LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "delay.h"
#define LED 7			// Led connect to P0.7
#define SW 0			// Led connect to Switch P0.0

int main()
{
	IODIR0 = 1<<LED;
	while(1)
	{
		if (((IOPIN0 >> SW)&1) == 0)
		{
			IOPIN0|= 1<<LED;
		}
		else
		{
			IOPIN0&= 1<<LED;
		}
	}
}

