#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: string
 * @accept: string
 * Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s++;
				return (s);
			}
		}
			s++;
	}
	return (0);
}
