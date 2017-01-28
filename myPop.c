#include "monty.h"

/**
 * myPop - recreates pop
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void myPop(stack_t **stack, unsigned int ln)
{
	stack_t *cur, *pre;

	pre = cur = *stack;
	if (*stack == NULL || stack = NULL)
	{
		printf("L%u: can't pop an empty stack\n", ln);
		exit(EXIT_FAILURE);
	}
	if (cur->next != NULL)
	{
		cur = cur->next;
		cur->prev = NULL;
		*stack = cur;
		free(pre);
	}
}
