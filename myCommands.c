#include "monty.h"
/**
 * myCommands - Checks if commands exist and if so executes
 *
 * @cmd: commands passed
 * Return:
 */
func_t myCmd(char *cmd)
{
	int i;
	instruction_t commands[] = {
		{"push", myPush},
/*
	    {"pall", myPall},
	    {"pint", myPint},
	    {"pop", myPop},
	    {"swap", mySwap},
	    {"add", myAdd},
	    {"nop", myNop},
*/
		{NULL, NULL}
};
	i = 0;
	while ((commands[i]).opcode != NULL)
	{
		if (strcmp((commands[i]).opcode, cmd) == 0)
			return ((commands[i]).f);
		i++;
	}
	return (NULL);
}
