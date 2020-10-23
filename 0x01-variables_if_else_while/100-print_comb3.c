#include <stdio.h>
/**
 * main - the advanced task
 * Return: 0 always
 */
int main(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		if (i > 0 && j == 0)
		{ j++; }
		if (i > 1 && j == 1)
		{ j++; }
		if (i > 2 && j ==  2)
		{ j++; }
		if (i > 3 && j == 3)
		{ j++; }
		if (i > 4 && j == 4)
		{ j++; }
		if (i > 5 && j == 5)
		{ j++; }
		if (i > 6 && j == 6)
		{ j++; }
		if (i > 7 && j == 7)
		{ j++; }
		if (i > 8 && j == 8)
		{ j++; }
		if (j == i)
		{ j++; }
		putchar(i + 48);
		putchar(j + 48);
		if (i == 8 && j == 9)
		{
		return (0);
		}
		putchar(',');
		putchar(' ');
	}
	}
	return (0);
}
