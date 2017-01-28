#include "monty.h"
#include <ctype.h>
/**
 * main - main
 * @argc: SE
 * @argv: SE
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	size_t size;
	int line_number = 1;
	char *cmd, *buf;
	stack_t *stk;
	int i, j;

	stk = NULL;
	buf = NULL;
	i = j = 0;
	usage_err(argc);
	fp = fopen(argv[1], "r");
	file_err(argv[1], fp);

	while (1)
	{
		getline(&buf, &size, fp);
		while (buf[i] != '\0')
		{
			if (!(isspace((unsigned char)buf[i])))
			{
				j = 0;
				break;
			}
			i++;
			j = 1;
		}
		if (j == 1)
		{
			j = 0;
			continue;
		}
		if (!feof(fp))
		{
			cmd = strtok(buf, " \t\n");
			if (cmd == NULL)
				continue;
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
		cmd[0] = '\0';
	}
    fclose(fp);
    free(buf);
    free_list(&stk);
    return (0);
}
