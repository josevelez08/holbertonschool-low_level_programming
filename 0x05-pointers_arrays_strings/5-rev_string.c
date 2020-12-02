#include "holberton.h"
/**
 * rev_string - function to print a string in reverse
 * @s: variable
 * Return: no return
 */

void rev_string(char *s)
{
	char *a, *p, src;
	int c, l;

	l = _strlen(s);
	a = s;
	p = s;
	c = 0;
	while (c < l - 1)
	{
		p++;
		c++;
	}
	c = 0;
	while (c < l / 2)
	{
		src = *p;
		*p = *a;
		*a = src;
		c++;
		a++;
		p--;
	}

}

/**
 * _strlen - calculate the length of a string
 * @s: address of that variable
 * Return: return the length of a string
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
