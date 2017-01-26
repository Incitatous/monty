#include "monty.h"

/**
 * main - main
 * @argc: SE
 * @argv: SE
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	ssize_t size = 1000;
	int line_number = 1;
	char *cmd, *buf;
	stack_t *stk;

	stk = NULL;
	usage_err(argc);
	fp = fopen(argv[1], "r");
	file_err(argv[1], fp);
	buf = malloc(sizeof(char) * size);
	malloc_err(buf);

	/* what if file is empty? */
	while (1)
	{
		fgets(buf, size, fp);
		if (!feof(fp))
		{
			cmd = strtok(buf, " \t\n");
			if (strcmp(cmd, "push") == 0)
			{
				cmd = strtok(NULL, " \t\n");
				_push(cmd, &stk, line_number);
			}
			else if (strcmp(cmd, "nop") == 0)
				continue;

			else
				(*myCmd)(cmd, line_number)(&stk, line_number);

			++line_number;
		}
		else
			break;
	}
	free(buf);
	fclose(fp);
	return (0);
}
