#include "holberton.h"
/**
 * _strncat - function concatenates two strings
 * @dest: string of destination
 * @src: string of source
 * @n: value of bytes
 * Return:  dest - strings concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, len_dest;

	len_dest = _strlen(dest);
	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[len_dest + c] = src[c];
	dest[len_dest + c] = '\0';
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
