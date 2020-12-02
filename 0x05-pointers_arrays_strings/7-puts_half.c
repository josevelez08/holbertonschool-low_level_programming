#include "holberton.h"
/**
 * puts_half - function to print half of a string
 * @str: variable
 * Return: no return
 */
void puts_half(char *str)
{
	int a, length;

	length = _strlen(str);
	if (length % 2 != 0)
		length++;
	length /= 2;
	a = length;
	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
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
