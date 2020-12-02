
#include "holberton.h"
/**
 * leet - function to encode to leet
 * @s: array
 * Return: the array encoded
 */
char *leet(char *s)
{
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char number[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = number[j];
		}
	}
	return (s);
}
