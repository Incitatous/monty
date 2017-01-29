#include "monty.h"

/**
 * myMul - multiplies top two elements of the stack
 * @stack: pointer to the given node
 * @ln: line number
 * Return: returns nothing
 */
void myMul(stack_t **stack, unsigned int ln)
{
	stack_t *tmp;

	tmp = *stack;
	if (tmp == NULL || tmp->next == NULL)
	{
		printf("L%u: can't mul, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	tmp->next->n *= tmp->n;
	myPop(stack, ln);
}
