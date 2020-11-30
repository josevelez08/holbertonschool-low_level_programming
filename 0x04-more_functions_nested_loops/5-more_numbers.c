#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;

	for ( i = 48; i < 58; i++)
	{
		_putchar(i);
		if ( i == 57)
		{
			i = 48;
			_putchar(i);
		}
	}
		_putchar(10);
}
