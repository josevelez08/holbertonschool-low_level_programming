#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i % 10;
		{
			if ( j < 3)
			{
			_putchar(k + 48);
			_putchar(i + 48);
			_putchar(' ');
			}
			else
			{
					_putchar(k + 48);
					_putchar(' ');
			}
			
		}
		}
		_putchar(10);
	}
}