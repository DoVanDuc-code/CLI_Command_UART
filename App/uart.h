#ifndef UART_H
#define UART_H

#include "stdint.h"
#include "string.h"
#include "stm32f1xx_hal.h"
#include "response.h"
#include "cli_command.h"

void uart_init(void);
void receive_uart(uint8_t data_rx);
void uart_handle(void);
#endif
