#include "monty.h"

/**
 * myPint - reproduces pint's behavior
 * @stack: SE
 * @ln: SE
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
