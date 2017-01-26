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
		usage_err;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
		file_err(argv[1]);

	buf = malloc(sizeof(char) * size);
	if (buf == NULL)
		malloc_err;

	while (!feof(fp))
	{
		fgets(buf, size, fp);
		/* what do we return when buf/file is empty? */
		tok = strtok(buf, " \t");
		cmd = myCmd(tok); /* why the fuck am I getting a warning?? */
		if (cmd == NULL)
			inst_err(line_number, tok);
		/* only works for the basic commands*/
		cmd(&stk, line_number);
		++line_number;
	}
	free(buf);
	return (0);
}
