#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to uns int
 * @b: binary number
 * Return: 0 if fails, number if succeed
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j = 1;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
	}

	i--;

	for (; i >= 0; i--)
	{
		if (b[i] == 49)
		{
			sum += j;
		}
		j *= 2;
	}
	return (sum);
}
