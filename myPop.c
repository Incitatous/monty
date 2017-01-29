#include "monty.h"

/**
 * myPop - removes the top element of the stack
 * @stack: pointer to the given stack
 * @ln: line number
 * Return: returns nothing
 */
void myPop(stack_t **stack, unsigned int ln)
{
	stack_t *tmp;

	if (*stack == NULL || stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", ln);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}
