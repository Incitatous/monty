#include "monty.h"

/**
 * mySwap - recreates swap
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void mySwap(stack_t **stack, unsigned int ln)
{
	int a, b;
	stack_t *cur, *pre, *tmp;
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
	cur = cur->next;
	a = pre->n;
	b = cur->n;
	pre->n = b;
	cur->n = a;
}
