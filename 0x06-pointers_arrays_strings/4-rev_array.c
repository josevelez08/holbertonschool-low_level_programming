#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: string 1
 * @n: string 2
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int *f = a;
	int *l = a + n - 1;

	while (f < l)
	{
	int tmp = *f;
	*f = *l;
	*l = tmp;
	f++;
	l--;
	}
}
