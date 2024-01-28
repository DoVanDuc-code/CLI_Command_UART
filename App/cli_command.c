#include "cli_command.h"
extern const cli_command_func_entry command_entry_table[] ;
//==================== Cach1 ====================//
const cli_command_infor* call_func_command(char *cmd)
{
	const cli_command_func_entry *command_entry = command_entry_table;
	while(command_entry->command_infor->function != NULL)
	{
		if(strcmp(command_entry->name, cmd ) == 0)
		{
			return command_entry->command_infor;
		}
		command_entry++;
	}
	return NULL;
}

//==================== Cach 2 ====================//
//const cli_command_func_entry* call_func_command(char*cmd)
//{
//	const cli_command_func_entry *command_entry = command_entry_table;
//	while(command_entry != NULL)
//	{
//		if(strcmp(command_entry->name, cmd)== 0)
//		{
//			return command_entry;
//		} 			
//		command_entry++;
//	}
//	return NULL;
//}

//const cli_command_func_entry* print_all_command(char*cmd)
//{
//	uint8_t index = 0;
//	while(command_entry_table[index].command_infor!= NULL)
//	{
//		if(strcmp(command_entry_table[index].name, cmd) == 0)
//		{
//			return &command_entry_table[index];
//		}
//		index++;
//	}
//	return NULL;
//}
void cli_command_excute(char *uart_buff, uint8_t len)
{	
		char *argv[10];
		uint8_t argv_numb = 0;
		char *pt;
		pt = strtok(uart_buff, " ");
		while(pt != NULL)
		{
			argv[argv_numb++] = pt;			
			pt = strtok(NULL, " ");
		}
		
//============= kiem tra cac gia tri luu trong mang con tro argv ==========//
//		for(uint8_t i = 0; i < argv_numb; i++)
//		{
//			response_print("%s\n", argv[i]);
//		}
		
//============================Cach 1=======================//
		const cli_command_infor *command = call_func_command(argv[0]);
		if(command != NULL)
		{
			command->function(argv, argv_numb);
		}
		else{
			response_print("find not found");
		}

//========================= Cach 2 ==========================//		
//		const cli_command_func_entry *command = call_func_command(argv[0]);
//		if(command != NULL)
//		{
//			command->command_infor->function(argv, argv_numb);
//		}
//		else{
//			response_print("find not found");
//		}

//			if(call_func_command(argv[0]) != NULL)
//			{
//				call_func_command(argv[0])->command_infor->function(argv, argv_numb);
//			}
//			
//			else
//				response_print("find not found");
}
