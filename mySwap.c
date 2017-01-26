#include "monty.h"

/**
 * mySwap - recreates swap
 * @stack: SE
 * @ln: SE
 * Return: returns nothing
 */
void mySwap(stack_t **stack, unsigned int ln)
{
	stack_t *tmp, *mytmp,  *cur, *pre;
	int i = 0;

	tmp = *stack;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		++i;
	}
	if (i < 2)
	{
		printf("L%u: can't swap, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	cur = pre = *stack;
	if (cur->next != NULL)
	{
        tmp = pre;
        mytmp = cur;
		myPop(pre);
        myPop(cur);
        myPush(tmp);
        myPush(cur);
	}
}
