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
	usage_err(argc);
	fp = fopen(argv[1], "r");
	file_err(argv[1], fp);
<<<<<<< HEAD
	//buf = malloc(sizeof(char) * size);
	//malloc_err(buf);
    buf = NULL;
    i = j = 0;
=======
	buf = malloc(sizeof(char) * size);
	malloc_err(buf);
>>>>>>> bcce8acc17f67fb7d6f5028f179d67b0d10768d3

	while (1)
	{
		getline(&buf, &size, fp);
<<<<<<< HEAD
        while (buf[i] != '\0')
        {
            if (!(isspace((unsigned char)buf[i])))
            {
                printf("%c\n", buf[i]);
                j = 0;
                break;
            }
            i++;
            j = 1;
        }
        if (j == 1)
        {
            printf("goes inside\n");
            j = 0;
            continue;
        }
		if (!feof(fp))
		{
			printf("Buffer: %s\n", buf);
            cmd = strtok(buf, " \t\n");
            if (cmd == NULL)
                continue;
            printf("%s\n", cmd);
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
=======
		if (feof(fp))
			break;

		else
		{
			if (buf[0] == '\n')
				continue;

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
	}
	fclose(fp);
	free_list(&stk);
	return (0);
>>>>>>> bcce8acc17f67fb7d6f5028f179d67b0d10768d3
}
