#include "holberton.h"
/**
 * print_binary - print number in binary
 * @n: num
 * Reruen
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = n;
	int i;

	if (x == 0)
	{
		_putchar('0');
	}

	for (i = 0; x != '\0'; i++)
	{
		x = x >> 1;
	}

	i--;

	while (i >= 0)
	{
		_putchar('0' + ((n >> i) & 1));
		i--;
	}
}
