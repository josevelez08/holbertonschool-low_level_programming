#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: number of lines and spaces
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int j;
	int i;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i <= j; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(10);
	}
}
