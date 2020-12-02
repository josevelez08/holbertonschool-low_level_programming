#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of numbers
 * @a: array
 * @size: size
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int res1, res2, c;

	res1 = 0;
	res2 = 0;
	for (c = 0; c < size; c++)
	{
		res1 += a[c * (size + 1)];
		res2 += a[(c + 1) * (size - 1)];
	}
	printf("%d, %d\n", res1, res2);
}
