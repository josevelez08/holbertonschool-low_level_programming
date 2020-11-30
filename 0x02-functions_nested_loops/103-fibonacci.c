#include <stdio.h>
/**
 * main - print the adding of fibonacci numbers
 *
 * Return: 0 Success
 */
int main(void)
{
	long int a, b, c, fibonacci, lim, res;

	b = 0;
	c = 1;
	lim = 4000000;
	res = 0;
	for (a = 0; res < lim; a++)
	{
		fibonacci = b + c;
		b = c;
		c = fibonacci;
		if (fibonacci >= 1 && fibonacci % 2 == 0)
		res = fibonacci + res;
	}
	printf("%ld", res);
	putchar('\n');
	return (0);
}
