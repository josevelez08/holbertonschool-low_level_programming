#include <stdio.h>

/**
 * _strchr - check the code for Holberton School students.
 * @s: string
 * @c: char
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
