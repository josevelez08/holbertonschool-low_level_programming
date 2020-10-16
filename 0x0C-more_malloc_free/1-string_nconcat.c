#include "holberton.h"
/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k = 0;
	char *v;


	if (s1 == NULL)
	{
		s1 = "";
		return (s1);
	}
	if (s2 == NULL)
	{
		s2 = "";
		return (s2);
	}
	for (i = 0; s1[i] != '\0';)
	{i++; }
	for (j = 0; s2[j] != '\0';)
	{j++; }
	if (n >=  j)
	{
		v = malloc(sizeof(char) * (i + j) + 1);
		n = j;
	}
	else
	{
		v = malloc(sizeof(char) * (i + n) + 1);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		v[k] = s1[i];
		k++;
	}
	j = 0;
	for (; k < n + i; k++)
	{
		v[k] = s2[j];
		j++;
	}
	v[k] = '\0';
	return (v);
}
