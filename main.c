#include "monty.h"

/**
 * main - 
 * @argc:
 * @argv:
 *
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	ssize_t size = 100;
	int line_number = 1;
	char *buf, *tok;
	stack_t *stk;
	func_t cmd;

	stk = NULL;
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	buf = malloc(sizeof(char) * size);
	if (buf == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	while (!feof(fp))
	{
		fgets(buf, size, fp);
		/* what do we return when buf/file is empty? */
		tok = strtok(buf, " ");
		cmd = myCmd(tok); /* why the fuck am I getting a warning?? */
		if (cmd == NULL)
		{
			printf("L%d: unknown instruction %s\n", line_number, tok);
			exit(EXIT_FAILURE);
		}
		/* only works for the basic commands*/
		cmd(&stk, line_number);
		++line_number;
	}
	free(buf);
	return (0);
}
