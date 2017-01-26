#include "monty.h"
/**
 * myPush - Pushes onto the stack
 *
 * Return: returns nothing
 */
void myPush(stack_t **stack, int num)
{
    stack_t *newElement;

    newElement = malloc(sizeof(stack_t));
    if (newElement == NULL)
    {
	    printf("Error: malloc failed\n");
	    exit(EXIT_FAILURE);
    }
    newElement->n = num;
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
}
