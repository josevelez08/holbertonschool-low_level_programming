#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: list of integers
 * @size: size of the array
 * @value: value to search
 * Return: 0 always
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int varleft = 0;
	unsigned int varrigth = size - 1;
	unsigned int varmedium = (varleft + varrigth) / 2;
	unsigned int item = 0;

	if (!array)
	{
		return (-1);
	}

	while (varleft <= varrigth)
	{
		item = varleft;
		printf("Searching in array: ");
		while (item <= varrigth)
		{
			printf("%d", array[item]);
			if (item != varrigth)
				printf(", ");
			else
				printf("\n");
			item++;
		}
		varmedium = (varleft + varrigth) / 2;

		if (array[varmedium] == value)
		{
			return (varmedium);
		}
		else if (value < array[varmedium])
		{
			varrigth = varmedium - 1;
		}
		else
		{
			varleft = varmedium + 1;
		}
	}
	return (-1);
}
