
#include "holberton.h"
/**
 * string_toupper - function to change all the lower to uppercase
 * @s: array
 * Return: no return
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		if (s[a] >= 97 && s[a] <= 122)
			s[a] = s[a] - 32;
				return (s);
}
