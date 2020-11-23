#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copies a given string
 * @str: string
 *
 * Return: new string or NULL if its empty
 */
char *_strdup(char *str)
{
	char *s;
	int i, lengh = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		lengh++;
	}

	s = malloc((sizeof(char) * lengh));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lengh; i++)
	{
		s[i] = str[i];
	}

	s[i] = '\0';
	return (s);
}
