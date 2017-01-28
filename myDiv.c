#include "monty.h"

/**
 * myDiv - reproduces div behavior
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void myDiv(stack_t **stack, unsigned int ln)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp == NULL || tmp->next == NULL)
	{
		printf("L%u: can't div, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	if (tmp->next == 0)
	{
		printf("L%u: division by zero\n", ln);
		exit(EXIT_FAILURE);
	}
	tmp->next->n /= tmp->n;
	myPop(stack, ln);
}
