#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
  int i;
  int j;
  int k;

  for ( i = 0; s1[i] != '\0'; i++);
  for ( j = 0; s2[j] != '\0'; j++);
  
  if ( i > j)
  {
    k = 15;
  }
  else if ( j > i )
  {
    k = -15;
  }
  else
  {
    k = 0;
  }
  return(k);
} 