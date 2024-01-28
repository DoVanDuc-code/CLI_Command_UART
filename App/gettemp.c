#include "gettemp.h"

void gettemp(char **buff, uint8_t buff_index)
{
	if(buff_index > 2)
		response_print("too much argv, %d", buff_index);
	if(buff_index < 2)
		response_print("don't enough argv, %d", buff_index);
	if(buff_index == 2)
	{
		uint8_t channel;
		channel = atoi(buff[1]);
		response_print("nhiet do: %.2f", temperature(channel));
	}
}

