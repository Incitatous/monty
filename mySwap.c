#include "monty.h"

/**
 * mySwap -
 * @stack:
 * @ln:
 @ Return: returns nothing
 */
void mySwap(stack_t **stack, unsigned int ln)
{
	stack_t *tmp, *cur, *pre;
	int i = 0;

	tmp = *stack;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		++i;
	}
	if (i < 2)
	{
		printf("L%u: can't swap, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	cur = pre = *stack;
	if (cur->next != NULL)
	{
		/* gotta figure out! */
		cur = cur->next;
	}
}
