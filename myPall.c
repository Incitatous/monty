#include "monty.h"

/**
 * myPall - prints all the values on the stack, starting from the top
 * @stack: pointer to the given node
 * @ln: line number
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
