#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: string
 * @accept: string
 * Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (k != i)
		{
			break;
		}

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
			}
		}
	}
	return (k);
}
