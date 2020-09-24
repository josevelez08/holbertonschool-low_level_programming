#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 * @c: letter in asscci code
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 96 && c < 123)
	{
		return (0);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
