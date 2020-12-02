#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @dest: destino
 * @src: fuente
 * @n: size
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for ( ; c < n; c++)
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
