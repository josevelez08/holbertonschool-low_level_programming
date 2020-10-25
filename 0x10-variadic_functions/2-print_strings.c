#include "variadic_functions.h"
/**
 * print_strings - check the code for Holberton School students.
 * @separator: the separator
 * @n: size of the sentence
 * Return: Always 0.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *j;
va_list valist;

va_start(valist, n);

for (i = 0; i < n; i++)
{
	j = va_arg(valist, char *);
	if (j == NULL)
	{
		if (i == n - 1)
	{
		printf("(nill)\n");
		return;
	}
	else
	{
		printf("(nill)");
		printf("%c ", *separator);
		continue;
	}
	}
	printf("%s", j);
	if (i == n - 1)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
	{
		continue;
	}
	printf("%c ", *separator);
}
	va_end(valist);
printf("\n");
}
