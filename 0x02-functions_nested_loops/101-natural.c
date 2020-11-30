#include <stdio.h>

/**
 * main - add when a is multiples of 3 or 5
 *
 * Return: (0) Success
 */

int main(void)
{
	int a = 0;
	int counter = 0;

	for ( ; a < 1024; ++a)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
		{
			counter += a;
		}
	}
	printf("%d\n", counter);

	return (0);
}
