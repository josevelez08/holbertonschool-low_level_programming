
#include "holberton.h"
/**
 * cap_string - function to capitalize the letters
 * @s: array
 * Return: the array changed
 */

char *cap_string(char *s)
{
	int a, c;

	a = 1;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] >= 'A' && s[c] <= 'Z')
			a = 0;
		else if (s[c] >= '0' && s[c] <= '9')
			a = 0;
		else if ((s[c] >= 'a' && s[c] <= 'z') && a == 1)
		{
			s[c] -= 32;
			a = 0;
		}

		if (s[c] == 9 || s[c] == 10 || s[c] == 32 || s[c] == 33
		    || s[c] == 34 || s[c] == 40 || s[c] == 41
		    || s[c] == 44 || s[c] == 46 || s[c] == 59
		    || s[c] == 63 || s[c] == 123 || s[c] == 125)
			a = 1;
	}
	return (s);
}
