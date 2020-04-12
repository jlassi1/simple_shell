#include "shell.h"

/**
 * main - main function
 * @argc: arg count
 * @argv: arg vector
 * @env: environment
 * Return: 0 for success
 */
int main(int argc, char **argv, char **env)
{
	char *line;
	char **dir, **cmd;
	char *combine;

	if (argc == 1 || argv[1] == NULL)
	{
		while (1)
		{
			write(1, "$ ", 2);
			line = get_line();
			if (line[0] == '\n')
			{
				free(line);
				continue;
			}
			cmd = split_line(line);
			dir = dirTok(env);
			combine = checkPath(dir, cmd[0]);
			checkBuiltins(combine, cmd);
			if (!combine)
				perror(combine);
		}
		free(line);
		free(cmd);
		free(dir);
	}

	return (0);
}
