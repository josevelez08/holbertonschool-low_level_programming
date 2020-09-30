#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 * @a: string
 * @n: tamaño
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
		int i;

	for (i = 0; i < n; i++)
	{
		if (i == 4)
		{
			printf("%i", a[i]);
		}
		else
		{
		printf("%i, ", a[i]);
		}
	}
	printf("\n");
}
