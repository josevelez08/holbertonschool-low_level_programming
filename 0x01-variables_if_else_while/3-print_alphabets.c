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

	for (j = 97; j <= 122; j++)
	{
		putchar(j);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
