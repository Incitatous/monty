#include "monty.h"

/**
 * mySwap - recreates swap
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void mySwap(stack_t **stack, unsigned int ln)
{
	int i, num;
	stack_t *tmp;

	tmp = *stack;
	i = 0;
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
	num = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = num;
}
