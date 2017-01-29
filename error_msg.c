#include "monty.h"

/**
 * usage_err - prints an error messge and exits
 *\when the number of given arguments is not 2
 * @n: number of arguments passed to main
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
 * file_err - prints an error message ane exits when fails to open a file
 * @av: name of the file
 * @fp: file pointer
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
 * malloc_err - prints an error message and exits when malloc fails
 * @buf: malloc-ed string
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
 * inst_err - prints an error message and exits when
 *\passed instruction is not executable
 * @line_number: line number
 * @cmd: passed command
 * Return: returns nothing
 */
void inst_err(unsigned int line_number, char *cmd)
{
	printf("L%d: unknown instruction %s\n", line_number, cmd);
	exit(EXIT_FAILURE);
}
