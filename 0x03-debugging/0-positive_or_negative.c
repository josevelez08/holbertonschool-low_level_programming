#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code for the Holberton School
 * Return: 0 always
 */
	void positive_or_negative(int i)
	{

	srand(time(0));

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
