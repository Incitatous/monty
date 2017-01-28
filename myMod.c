#include "monty.h"

/**
 * myMod - reproduces div behavior
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void myMod(stack_t **stack, unsigned int ln)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp == NULL || tmp->next == NULL)
	{
		printf("L%u: can't mod, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	if (tmp->next == 0 || tmp->n == 0)
	{
		printf("L%u: division by zero\n", ln);
		exit(EXIT_FAILURE);
	}
	tmp->next->n /= tmp->n;
	myPop(stack, ln);
}
