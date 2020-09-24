#include "holberton.h"

/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar(i);
	}
	_putchar(10);
}
