#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: address string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	return (i);
}

