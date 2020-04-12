#include "shell.h"

/**
 * get_line - function
 * Return: buffer
 */
char *get_line(void)
{
char *buf = NULL;
size_t bufsize = 0;
int get;

get = getline(&buf, &bufsize, stdin);
if (get == EOF)
{
write(1, "\n", 1);
_exit(1);
}
return (buf);
}

/**
 * split_line - function to split line into args
 * @line: cmd input
 * Return: tokens
 */
char **split_line(char *line)
{
char *dup = strdup(line);
char *token;
char *t;
char **tok = NULL;
int i;

token = strtok(line, DELIM);
while (token)
{
token = strtok(NULL, DELIM);
i++;
}
free(line);

tok = malloc(sizeof(char *) * i + 1);
t = strtok(dup, DELIM);
i = 0;
while (t)
{
tok[i] = t;
t = strtok(NULL, DELIM);
i++;
}
tok[i] = '\0';
return (tok);
}
