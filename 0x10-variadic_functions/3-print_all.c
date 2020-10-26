	#include "variadic_functions.h"
/**
 * print_all - check the code for Holberton School students.
 * @format: type
*/
void print_all(const char * const format, ...)
{
	unsigned int j = 0;
	va_list ap;
	char *s;

	va_start(ap, format);

	while (format[j] != '\0')
	{
		switch (format[j++])
		{
		case 's':
		s = va_arg(ap, char *);
		if (!s)
		{
			s = "(nill)";
		}
		printf("%s", s);
		break;
		case 'i':
		printf("%d", va_arg(ap, int));
		break;
		case 'f':
		printf("%f", va_arg(ap, double));
		break;
		case 'c':
		printf("%c", va_arg(ap, int));
		break;
		default:
		continue;
		}
		if (format[j])
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(ap);
}
