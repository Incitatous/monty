#include "monty.h"

/**
 * mySub - reproduces sub behavior
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void mySub(stack_t **stack, unsigned int ln)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp == NULL || tmp->next == NULL)
	{
		printf("L%u: can't sub, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	tmp->next->n -= tmp->n;
	myPop(stack, ln);
}
