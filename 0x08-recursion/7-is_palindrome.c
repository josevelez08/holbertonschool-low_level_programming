#include "holberton.h"
/**
 * is_palindrome - determinate if a string is palindrome or not
 * @s: string
 * Return: 1 if it is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (check_pal(s, 0, len - 1));
}
/**
 * check_pal - function to check character by character
 * @s: string
 * @a: start position
 * @b: end position
 * Return: 1 if it is palindrome and 0 if not
 */
int check_pal(char *s, int a, int b)
{
	if (a >= b)
		return (1);
	if (*(s + a) != *(s + b))
		return (0);
	else
		return (check_pal(s, a + 1, b - 1));
}
/**
 * _strlen_recursion - prints the length of string
 * @s: The string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a += 1;
		a = a + _strlen_recursion(s + 1);
	}
	return (a);
}
