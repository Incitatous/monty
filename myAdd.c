#include "monty.h"

/**
 * myAdd - reproduces add behavior
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void myAdd(stack_t **stack, unsigned int ln)
{
	stack_t *tmp, *cur, *pre;
	int sum;

	tmp = *stack;
	if (tmp == NULL || tmp->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	else
	{
		tmp->next->n += tmp->n;
		myPop(stack, ln);
	}
}
