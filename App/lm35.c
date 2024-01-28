#include "lm35.h"

float temperature(uint8_t channel)
{
	float temp = 37.5;
	if(channel == 0)	temp = 40;
	if(channel == 1)	temp = 10.5;
	return temp;
}
