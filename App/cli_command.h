#ifndef CLI_COMMAND_H
#define CLI_COMMAND_H

#include <stdint.h>
#include <string.h>
#include "response.h" 
#include "cli_command.h"
#include "gettemp.h"
#include "cli_command_table_ci.h"


void cli_command_excute(char *uart_buff, uint8_t len);
#endif
