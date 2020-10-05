#include "holberton.h"
/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: size
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int j = 0;

	for (i = 0; i < n;)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
