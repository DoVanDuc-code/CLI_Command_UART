#include "set_effect_led.h"
//extern const cli_command_infor* call_func_command(char *cmd);
uint8_t channel; 
void set_effect_led(char **buff, uint8_t buff_index)
{
	if(buff_index > 2)
		response_print("too much argv, %d", buff_index);
	if(buff_index < 2)
		response_print("don't enough argv, %d", buff_index);
	
	//response_print("\nchannel = %d", channel);
	if(buff_index == 2)
	{
		
		
			//cli_command_excute(buff[1], buff_index);
			channel = atoi(buff[1]);
			response_print("channel = %d", channel);
			effect_led(channel, buff, buff_index);
	}
}
