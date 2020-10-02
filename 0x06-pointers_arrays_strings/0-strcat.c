#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 * @dest: destino
 * @src: fuente
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (j = 0; src[j] != '\0';)
	{
		dest[i++] = src[j++];
	}
	return (dest);
}
