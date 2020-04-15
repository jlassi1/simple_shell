#include "shell.h"

/**
 * cd - function
 * @cmd: cmd
 * Return: 0 for success
 */
int cd(char **cmd)
{
chdir(cmd[1]);
return (0);
}

/**
 * exitexe - function to exit
 * @cmd: cmd
 * Return: 0 for success
 */
int exitexe(char **cmd)
{
if (*cmd)
exit(98);
return (0);
}

/**
 * printenv - function
 * @cmd: pointer to cmd
 * Return: 0 for success
 */
int printenv(char **cmd)
{
int i;

if (*cmd)
{
i = 0;
while (environ[i])
{
write(1, environ[i], _strlen(environ[i]));
write(1, "\n", 1);
i++;
}
}
return (0);
}

/**
 * checkBuiltins - function
 * @combine: full dir
 * @cmd: cmd
 * Return: path to builtin // process from directory
 */
int checkBuiltins(char *combine, char **cmd)
{
int i, stats;
char *array[] = {"cd", "exit", "env", NULL};

typedef int (*Builtins)(char **);
Builtins f[] = {&cd, &exitexe, &printenv};

i = 0;
while (array[i] != NULL)
{
if (_strcmp(array[i], cmd[0]) == 0)
return (f[i](cmd));
i++;
}
stats = exe(combine, cmd);
return (stats);
}
