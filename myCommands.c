#include "monty.h"
/**
 * myCommands - Checks if commands exist and if so executes
 *
 * @args: commands passed
 * Return: Always 0 or 1
 */
void *(*f)(stack_t **stack, unsigned int line_number)
{
    int i;
    builtins commands[] = {
        {"push", myPush}
        {"pall", myPall}
        {"pint", myPint}
        {"pop", myPop}
        {"swap", mySwap}
        {"add", myAdd}
        {"nop", myNop}
        {NULL, NULL}
};

    i = 0;
    while (commands[i].s != NULL)
    {
        if (strcmp(args[i], commands[i].s == 0)
            (commands[i].function)(args[i]);
            return (1);
        i++;
    }
    return (0);
}
