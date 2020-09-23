#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *	@i: last digit
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	char j;

	j = i % 10;

	if (j < 0)
	{
		j = j * -1;
	}
	_putchar(j + 48);
	return (j);
}
