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
	ssize_t size = 10;
	int num;
	int line_number = 1;
	char *cmd, *buf;
	stack_t *stk;

	stk = NULL;
	if (argc != 2)
		usage_err;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
		file_err(argv[1]);

	buf = malloc(sizeof(char) * size);
	if (buf == NULL)
		malloc_err;

	while (1)
	{
		fgets(buf, size, fp);
		if (!feof(fp))
		{
			cmd = strtok(buf, " \t\n");
			if (strcmp(cmd, "push") == 0)
			{
				num = atoi(strtok(NULL, " \t\n"));
				myPush(&stk, line_number, num);
				++line_number;
			}
			else
			{
				(*myCmd)(cmd, line_number)(&stk, line_number);
				++line_number;
			}
		}
		else
			break;
	}
	free(buf);
	fclose(fp);
	return (0);
}
