#include <stdio.h>
/**
 * main - print the 50 first fibonacci numbers
 *
 * Return: 0 Success
 */
int main(void)
{
	long int a, b, c, fibonacci;

	b = 1;
	c = 1;
	fibonacci = 1;
	printf("%ld", fibonacci);
	putchar(',');
	putchar(' ');
	for (a = 0; a <= 48; a++)
	{
		fibonacci = b + c;
		b = c;
		c = fibonacci;
		printf("%ld", fibonacci);
		if (a != 48)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
