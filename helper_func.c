#include "monty.h"

/**
 * _push - prints error messages and executes atoi and
 *\pass the result to myPush
 * @cmd: passed command
 * @stack: pointer to the given linked list
 * @ln: line number
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
 * free_list - frees a node
 * @stack: pointer to the given node
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
