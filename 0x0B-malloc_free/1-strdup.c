#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: one string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
