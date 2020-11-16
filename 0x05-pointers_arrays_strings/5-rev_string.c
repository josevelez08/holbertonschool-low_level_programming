#include "holberton.h"
/**
 * rev_string - print a string in reverse
 * @s: addrres of the string
 *
 */
void rev_string(char *s)
{
char *t;
char q;
int i;
int j;


t = s;
for (i = 0; s[i] != '\0';)
{i++; }

for (j = 0; i != 4; i--)
{
	q = s[j];
	s[j] = t[i];
	j++;
	t[i] = q;
}
for (i = 0, j = 1; i != 9; j++, i++)
{
	s[i] = s[j];
}
s[9] = '\0';
}
