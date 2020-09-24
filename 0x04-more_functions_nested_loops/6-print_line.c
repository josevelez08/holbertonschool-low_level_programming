#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: numer of times that print the line
 * Return: Always 0.
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
		_putchar(10);
}
