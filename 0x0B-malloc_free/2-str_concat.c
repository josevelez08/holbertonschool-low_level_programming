#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - check the code for Holberton School students.
 * @s1: one string
 * @s2: second string
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *y;

	for (i = 0; s1[i] != '\0';)
	{
		i++;
	}
	for (j = 0; s2[j] != '\0';)
	{
		j++;
	}

	k = i + j;

	y = malloc((sizeof(char) * k) + 1);
	if (y == NULL)
	{
		return (0);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		y[i] = s1[i];
	}
		for (j = 0; s2[j] != '\0'; j++)
	{
		y[i] = s2[j];
		i++;
	}
	y[i] = '\0';
	return (y);
}
