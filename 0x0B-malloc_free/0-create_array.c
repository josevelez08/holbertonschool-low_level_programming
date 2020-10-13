#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - check the code for Holberton School students.
 * @size: one string
 * @c: second string
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *y;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	y = malloc(sizeof(char) * size);
	if (y == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < 98; i++)
	{
		y[i] = c;
	}
	return (y);
}
