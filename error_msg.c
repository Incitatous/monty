#include "monty.h"

void usage_err(void)
{
	printf("USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

void file_err(char *av)
{
	printf("Error: Can't open file %s\n", av);
	exit(EXIT_FAILURE);
}

void malloc_err(void)
{
	printf("Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

void inst_err(unsigned int line_number, char *s)
{
	printf("L%d: unknown instruction %s\n", line_number, s);
	exit(EXIT_FAILURE);
}
