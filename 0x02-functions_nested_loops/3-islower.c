#include "holberton.h"
/**
 * _islower - writes the character c to stdout
 * @c: parameters
 * Return: On success 1.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
