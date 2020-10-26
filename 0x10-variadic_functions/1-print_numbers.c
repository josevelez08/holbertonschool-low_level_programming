#include "variadic_functions.h"
/**
 * print_numbers - check the code for Holberton School students.
 * @separator: is a pointer pointing to a comma
 * @n: is the numbre of variables
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	int j;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(arguments, unsigned int);
		printf("%d", j);
		if (i == n - 1)
		{
			break;
		}
		else
		{
			if (separator == NULL)
			{
				continue;
			}
			printf("%c ", *separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
