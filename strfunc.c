#include "shell.h"
/**
 * _strlen - recursion function
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	else
		return (0);
}


/**
 *_strcmp - function comparison of strings
 *@s1:  int pointer
 *@s2:  int pointer
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;
	j = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
	}
	return (j);
}

/**
 *_strdup - function
 *@str: char
 *Return: string
 */
char *_strdup(char *str)
{
	char *s;
	int len, i;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	s = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
