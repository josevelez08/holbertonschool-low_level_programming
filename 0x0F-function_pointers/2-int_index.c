#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: tamaño del array
 * @cmp: funtion to pointer
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp != '\0' && size > 0 && array != '\0')
	{
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
		{
			return (i);
		}
		}
		if (j == 0)
		{
			return (-1);
		}
	}
	return (0);
}
