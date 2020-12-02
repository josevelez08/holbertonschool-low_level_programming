  
#include <stdio.h>
#include "holberton.h"
/**
 * _strcpy - copy a string
 * @dest: destination pointer
 * @src: source pointer
 * Return: char is returned
 */

char *_strcpy(char *dest, char *src)
{
	int c, length;

	length = _strlen(src) + 1;
		for (c = 0; c < length && src[c] != '\0'; c++)
			dest[c] = src[c];
		if (c < length)
			dest[c] = '\0';
	return (dest);
}

/**
 * _strlen - calculate the length of the string
 * @s: address of that variable
 * Return: return the length of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
