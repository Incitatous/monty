#include "monty.h"

/**
 * myAdd - reproduces add behavior
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void myAdd(stack_t **stack, unsigned int ln)
{
	stack_t *tmp, *cur, *pre;
	int i = 0;
	int sum;

	tmp = *stack;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		++i;
	}
	if (i < 2)
	{
		printf("L%u: can't add, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	cur = pre = *stack;
	if (cur->next != NULL)
	{
		cur = cur->next;
		sum = (pre->n) + (cur->n);
	}
	/* testing */
	printf("sum: %d\n", sum);
}
