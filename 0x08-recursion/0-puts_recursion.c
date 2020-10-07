#include "holberton.h"
/**
 *  _puts_recursion - pinting with recursion
 * @s: character
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar(10);
	}
}
