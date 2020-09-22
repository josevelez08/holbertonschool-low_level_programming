#include "holberton.h"

/**
 * main - writes the character c to stdout
 *
 * Return: On success 1.
 */

int main(void)
{
	int i = 0;
	char c[9] = "Holberton";

	while ( i < 10)
	{
	_putchar(c[i]);
	i++;
	}
	_putchar(10);
	return(0);
}