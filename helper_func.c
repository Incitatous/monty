#include "monty.h"

/**
 * _push - SE
 * @cmd: SE
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void _push(char *cmd, stack_t **stack, unsigned int ln)
{
	int i, num;

	i = 0;
	if (cmd == NULL)
	{
		printf("L%u: usage: push integer\n", ln);
		exit(EXIT_FAILURE);
	}
	while (cmd[i] != '\0')
	{
		if (isdigit(cmd[i]) == 0)
		{
			printf("L%u: usage: push integer\n", ln);
			exit(EXIT_FAILURE);
		}
		else
			++i;
	}
	num = atoi(cmd);
	myPush(stack, num);
}
