#include "types.h"
#include "delay.h"

void delay_ms(U32 dlyMs)
{
	dlyMs*=12000;
	while(dlyMs--);
}

void delay_us(U32 dlyUs)
{
	dlyUs*=12;
	while(dlyUs--);
}
