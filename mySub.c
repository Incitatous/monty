#include "monty.h"

/**
 * mySub - subtracts the top element of the stack
 *\from the second top element of the stack
 * @stack: pointer to the given node
 * @ln: line nunber
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
