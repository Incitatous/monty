#include "monty.h"

/**
 * myCmd - Checks if commands exist and if so executes
 * @cmd: commands passed
 * @ln: line number
 * Return: function to the corresponding commmand or NULL
 */
void (*myCmd(char *cmd, unsigned int ln))(stack_t **stack, unsigned int ln)
{
	int i;
	instruction_t commands[] = {
		{"pall", myPall},
		{"pint", myPint},
		{"pop", myPop},
		{"swap", mySwap},
		{"add", myAdd},
		{"sub", mySub},
		{"div", myDiv},
		{"mul", myMul},
		{"mod", myMod},
		{NULL, NULL}
};
	i = 0;
	while ((commands[i]).opcode != NULL)
	{
		if (strcmp((commands[i]).opcode, cmd) == 0)
			return ((commands[i]).f);
		i++;
	}
	inst_err(ln, cmd);
	return (NULL);
}
