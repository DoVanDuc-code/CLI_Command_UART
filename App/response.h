#ifndef RESPONSE_H
#define RESPONSE_H

#include "stm32f1xx_hal.h"
#include <stdio.h>
#include <string.h>
void response_print(const char* str,...);
void response_init(UART_HandleTypeDef *_huart_print);
#endif
