#include "shell.h"

/**
 * exe - exe function
 * @fullPath: full directory with cmd
 * @cmd: cmd input
 * Return: status
 */
int exe(char *fullPath, char **cmd)
{
pid_t child;
int status = 0;

child = fork();
if (child == 0)
{
status = execve(fullPath, cmd, NULL);
exit(status);
}
else
wait(NULL);
return (status);
}
