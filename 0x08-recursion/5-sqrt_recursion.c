#include "holberton.h"
/**
 * _sqrt_recursion - return the power of x number y times
 * @n: number
 * Return: power result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (looksqrt(n, 1));
}
/**
 * looksqrt - find the sqrt of a number
 * @b: result
 * @a: base
 * Return: the base of a sqrt
 */
int looksqrt(int b, int a)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	else
		return (looksqrt(b, a + 1));
}
