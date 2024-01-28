#ifndef CLI_FUNC_CI_H
#define CLI_FUNC_CI_H

#include <stdint.h>
typedef void (*command_entry)(char **uart_buff, uint8_t len);
typedef struct
{
	command_entry function;
	char *help;
}cli_command_infor;
typedef struct 
{
	const char *name;
	const cli_command_infor *command_infor;
}cli_command_func_entry;
#endif
