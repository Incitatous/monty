#include "monty.h"

/**
 *
 *
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
 *
 *
 *
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
 *
 *
 */
void malloc_err(char *buf)
{
	if (buf == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}

void inst_err(unsigned int line_number, char *cmd)
{
	printf("L%d: unknown instruction %s\n", line_number, cmd);
	exit(EXIT_FAILURE);
}
