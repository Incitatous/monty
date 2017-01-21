#include "monty.h"
/**
 * myPush - Pushes onto the stack
 *
 * Return: Always 0 or 1
 */
void *myPush(stack_t **stack, unsigned int line_number)
{
    int n;
    stack_t *newElement;
    newElement = malloc(sizeof(stack_t);

    if (newElement == NULL)
        return (NULL);
    newElement->n = n;
    newElement->prev = NULL;
    if (*stack == NULL)
    {
        newElement->next = NULL;
    }
    else
    {
        newElement->next = *stack;
        (*stack)->prev = newElement;
    }
    *stack = newElement;
    return (*stack)
}
