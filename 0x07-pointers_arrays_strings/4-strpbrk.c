#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: string
 * @accept: string
 * Return: Always 0.
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		s++;
		if (*s == *accept)
		{
			return (s);
		}
	}
	return (0);
}
