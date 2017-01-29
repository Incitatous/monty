#include "monty.h"

/**
 * myPint - prints the value at the top of the stack, followed by a new line
 * @stack: pointer to the given node
 * @ln: line number
 * Return: returns nothing
 */
void myPint(stack_t **stack, unsigned int ln)
{
	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", ln);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
