#include "monty.h"
/**
 * myPall - reproduces the behavior of pall
 * @stack: SE
 * @line_number: SE
 * Return: nothing
 */
void myPall(stack_t **stack, unsigned int line_number)
{
    size_t  length;
    const stack_t *h;

    h = *stack;
    length = 0;
    while (h != NULL)
    {
        ++length;
        printf("%d\n", h->n);
        h = h->next;
    }
}
