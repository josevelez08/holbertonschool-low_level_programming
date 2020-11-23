#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @str: Pointer
 *
 * Return: Always 0.
 */
int _strlen(char *str)
{
	int i, lengh;

	for (i = 0; str[i] != 0; i++)
	{
		lengh++;
	}

	return (lengh);
}

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: two strins or Null
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s = (char *)malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; s1[i] != '\0'; i++, k++)
	{
		s[k] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++, k++)
	{
		s[k] = s2[j];
	}

	s[k] = '\0';
	return (s);
}
