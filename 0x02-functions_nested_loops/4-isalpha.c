#include "holberton.h"
/**
 * _isalpha - writes the character c to stdout
 * @c: parameters
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
