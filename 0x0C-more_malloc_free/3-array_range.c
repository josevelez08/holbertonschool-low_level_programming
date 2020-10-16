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
	int *u;
	int p;
	p  = 0;

	u = malloc(sizeof(int) * (max - min + 1));
	if (u == NULL)
	{
		free(u);
		return (NULL);
	}
	for (p = 0; min <= max; p++)
	{
		u[p] = min;
		min++;
	}
	return (u);
}
