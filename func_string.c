#include "shell.h"

/**
 * _strlen -that returns the length of a string.
 *@s: char
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
return (i);
}

/**
 *_strcmp- function that compares two strings.
 *@s1: char
 *@s2: char
 *Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;

		result = s1[i] - s2[i];

return (result);
}

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str : char
 *Return: char
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

array = malloc((j + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
		array[i] = str[i];

	array[i] = '\0';
return (array);
}
