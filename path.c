#include "shell.h"

/**
 * env - function to write env
 * @env: char **
 * Return: void
 */
void env(char **env)
{
	int i = 0;

	while (env[i])
	{
		write(1, env[i], _strlen(env[i]));
		write(1, "\n", 1);
		i++;
	}
}


/**
 * path - function
 * @dir: directory
 * @av: argument value
 * Return: buffer
 */
char *path(char *dir, char *av)
{
	int i, j, len, len1;
	char *buf;

	len = _strlen(dir);
	len1 = _strlen(av);

	buf = malloc(sizeof(char) * len + len1 + 1);

	i = 0;
	while (i < len)
	{
		buf[i] = dir[i];
		i++;
	}
	j = 0;
	while (i < len + len1)
	{
		buf[i] = av[j];
		i++;
		j++;
	}
	buf[i] = '\0';
	return (buf);
}


/**
 * get_env - function
 * @env: environment
 * Return: tokens
 */
char *get_env(char **env)
{
	int i, j, len;
	char *str = "PATH";
	char *s, *buf;

	i = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] == str[j])
		{
			if (env[i][j + 1] == str[j + 1])
			{
				s = env[i];
				break;
			}
			j++;
		}
		i++;
	}
	len = _strlen(s);
	buf = malloc(sizeof(char) * len + 1 + 8);

	i = 5;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ':')
		{
			buf[j] = '/';
			j++;
		}
		buf[j] = s[i];
		i++;
		j++;
	}
	buf[j] = '/';
	j++;
	buf[j] = '\0';
	return (buf);
}


/**
 * dirTok - function
 * @env: environment
 * Return: tokens
 */
char **dirTok(char **env)
{
	char **tokens;
	char *tok;
	int i;
	char *dir;

	dir = get_env(env);
	i = 0;
	tokens = malloc(sizeof(char *) * 9);
	tok = strtok(dir, " :");
	while (tok != NULL)
	{
		tokens[i] = tok;
		i++;
		tok = strtok(NULL, " :");
	}
	tokens[i] = NULL;
	return (tokens);
}


/**
 * checkPath - function to check path
 * @dir: diretory
 * @cmd: cmd input
 * Return: full path
 */
char *checkPath(char **dir, char *cmd)
{
	struct stat st;
	char *fullPath;

	while (*dir)
	{
		fullPath = path(*dir, cmd);
		if (stat(fullPath, &st) == 0)
			return (fullPath);
		dir++;
	}
	return (NULL);
}
