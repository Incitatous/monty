#include "monty.h"

/**
 * myPall - reproduces the behavior of pall
 * @stack: SE
 * @line_number: SE
 * Return: nothing
 */
void myPall(stack_t **stack, unsigned int ln)
{
	stack_t *h;
	(void) ln;

	h = *stack;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
