#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code for the Holberton School
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
