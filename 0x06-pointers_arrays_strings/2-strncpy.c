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
	int i = 0;
	int j = 0;

	for (i = 0; i != n;)
	{
		dest[i++] =  src[j++];
	}
	return (dest);
	}
