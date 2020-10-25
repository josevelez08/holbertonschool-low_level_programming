#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 *	@n: numbers of variables
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		va_end(valist);
		return (0);
	}
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum +=  va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
