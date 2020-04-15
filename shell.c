#include "shell.h"
/**
 * sig_handler - checks if Ctrl C is pressed
 * @sig_num: int
 */
void sig_handler(int sig_num)
{
	if (sig_num == SIGINT)
	{
		write(1, "\n$ ", 3);
	}
}
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
			signal(SIGINT, sig_handler);
			if (isatty(STDIN_FILENO))
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
