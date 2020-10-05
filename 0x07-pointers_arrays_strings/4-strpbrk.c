#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
  int i = 0;
  int j = 0;
  int k = 0;
  
  for ( i = 0; s[i] != ','; i++)
    {
      for ( j = 0; accept[j] != '\0'; j++)
      {
        if ( accept[j] == s[i])
        {
          k++;
        }
      }
    }
    return (k);
}