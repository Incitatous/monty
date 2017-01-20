#include "holberton.h"
/**
 * myCommands - Checks if commands exist and if so executes
 *
 * @args: commands passed
 * Return: Always 0 or 1
 */
int myCommands(char **args)
{
    int i;
    builtins commands[] = {
        {"push", myPush}
        {"pall", myPall}
        {NULL, NULL}
};

    i = 0;
    while (commands[i].s != NULL)
    {
        if (args[i] == " " || args[i] == "\t")
            i++;
        else if (strcmp(args[i], commands[i].s == 0)
            (commands[i].function)(args[i]);
            return (1);
        i++;
    }
    return (0);
}
