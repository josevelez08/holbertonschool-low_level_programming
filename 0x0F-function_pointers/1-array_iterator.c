#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: size of the array
 * @action: function to pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action)
	{
	return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
