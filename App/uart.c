#include "uart.h" 

#define MAX_LEN		64
char uart_buff[MAX_LEN];
static uint8_t uart_index =0;
uint8_t uart_flag = 0;

// ham nhan chuoi truyen vao
void receive_uart(uint8_t data_rx)
{
	if(data_rx == '\n')
		{
			uart_buff[uart_index++] = '\0';
			uart_flag = 1;
		}
	else
	{
		uart_buff[uart_index++] = data_rx;		
	}
}

//ham xu ly chuoi 
void uart_handle(void)
{
	if(uart_flag == 1)
	{		
		cli_command_excute(uart_buff, uart_index);		
		uart_index = 0;
		uart_flag = 0;
		for(uint8_t i = 0; i < uart_index; i++)
		{
			uart_buff[uart_index] = NULL;
		}
	}
		
}

// ham khoi tao UART
void uart_init(void)
{

}

