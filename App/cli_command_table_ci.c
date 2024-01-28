#include "cli_command_table_ci.h"

const cli_command_infor gettemp_infor =
{
	gettemp,
	"return value temperature "
};

const cli_command_infor set_effect =
{
	set_effect_led,
	"return string introduction of system "
};

const cli_command_func_entry command_entry_table[] =
{
	{"gettemp", &gettemp_infor},
	{"SetEffect", &set_effect},
	{NULL, NULL}
};
