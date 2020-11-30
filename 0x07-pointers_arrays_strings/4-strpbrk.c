#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a ser of bytes
 * @s: Destination memory
 * @accept: Memory for source
 * Return: Destination memory
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
