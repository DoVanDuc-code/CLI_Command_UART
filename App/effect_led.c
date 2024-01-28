#include "effect_led.h"


void effect_led (uint8_t channel, char **buff, uint8_t buff_index)
{
	while(channel == 1)
	{
		channel = atoi(buff[1]);
		if(channel != 1)		break;
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
		HAL_Delay(100);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
		HAL_Delay(100);
	}
//		while(channel == 2)
//	{
//		if(channel != 2)		break;
//		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
//		HAL_Delay(500);
//	}
		while(channel == 3)
	{
		if(channel != 3)		break;
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
		HAL_Delay(1000);
	}
}
