#include "monty.h"

/**
 * usage_err -
 * @n:
 * Return: returns nothing
 */
void usage_err(int n)
{
	if (n != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * file_err -
 * @av:
 * @fp:
 * Return: returns nothing
 */
void file_err(char *av, FILE *fp)
{
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", av);
		exit(EXIT_FAILURE);
	}
}

/**
 * malloc_err -
 * @buf:
 * Return: returns nothing
 */
void malloc_err(char *buf)
{
	if (buf == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * inst_err -
 * @line_number:
 * @cmd:
 * Return: returns nothing
 */
void inst_err(unsigned int line_number, char *cmd)
{
	printf("L%d: unknown instruction %s\n", line_number, cmd);
	exit(EXIT_FAILURE);
}
