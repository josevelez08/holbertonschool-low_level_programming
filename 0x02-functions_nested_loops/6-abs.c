#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 * @i: value absolute
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
	{
		return (i);
	}
}
