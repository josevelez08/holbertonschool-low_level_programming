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
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
