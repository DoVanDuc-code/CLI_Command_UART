#include "response.h"
#include <stdarg.h>

static UART_HandleTypeDef *huart_print;		// luu gia tri tranh mat dia chi khi goi nhieu lan

// ham in ra man hinh hercules hoat dong nhu ham printf
void response_print(const char* str, ...)
{
	char stringArray[100];
	va_list args;
	va_start(args, str);
	vsprintf(stringArray, str, args);
	va_end(args);
	HAL_UART_Transmit(huart_print, (uint8_t *)stringArray, strlen(stringArray),100);
}
// hàm thay the khoi phai extern UART_HandleTypeDef huart1
void response_init(UART_HandleTypeDef *_huart_print)
{
	huart_print = _huart_print;
}
