#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: first pointer
 * @b: second pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
