#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	for (j = i - 1; s[j] != '\0'; j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
