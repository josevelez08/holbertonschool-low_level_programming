#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a ser of bytes
 * @s: Destination memory
 * @accept: Memory for source
 * Return: Destination memory
 **/
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
		if (s[a] == accept[b])
			return (&s[a]);
			b++;
		}
		a++;
	}
	return (0);
}
