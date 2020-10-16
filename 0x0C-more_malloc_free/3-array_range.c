#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *o;
	int p;

	if (min > max)
	{
		return (NULL);
	}
	p  = 0;

	o = malloc(sizeof(int) * (max - min + 1));
	if (o == NULL)
	{
		free(o);
		return (NULL);
	}
	for (p = 0; min <= max; p++)
	{
		o[p] = min;
		min++;
	}
	return (o);
}
