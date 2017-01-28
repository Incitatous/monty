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

/**
 * free_list - frees a list_t list
 * @stack: linked list
 * Return: Freedom!
 */
void free_list(stack_t **stack)
{
	stack_t *tmp;

	while (*stack != NULL)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	free(*stack);
}


/**
 *
 *
 *

void _isspace()
{
while (buf[i] != '\0')
{
	if (!(isspace((unsigned char)buf[i])))
	{
		j = 0;
		break;
	}
	i++, j = 1;
}
if (j == 1)
{
	j = 0;
	continue;
}
}
*/
