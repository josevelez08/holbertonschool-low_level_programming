	#include "variadic_functions.h"
/**
 * print_all - check the code for Holberton School students.
 * @format: type
*/
void print_all(const char * const format, ...)
{
	unsigned int j;
	va_list ap;
	int i;
	char *s;
	double f;
	char c;

	va_start(ap, format);

	while (format[j] != '\0')
	{
		switch (format[j++])
		{
		case 's':
		s = va_arg(ap, char *);
		printf("%s", s);
		break;
		case 'i':
		i = va_arg(ap, int);
		printf("%d", i);
		break;
		case 'f':
		f = va_arg(ap, double);
		printf("%f", f);
		break;
		case 'c':
		c = va_arg(ap, int);
		printf("%c", c);
		break;
		default:
		continue;
		}
		if (format[i])
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(ap);
}
