#include "holberton.h"
#define NULL ((void *)0)
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
    unsigned int i;
    int j = 0;
    char a[20];
    char *t = a;
    for ( i = 0; s[i] != '\0';i++)
    {
        if ( s[i] == c )
        {
          while ( s[i] != '\0')
          {
            a[j] = s[i];
            j++;
            i++;
          }
        }
    }
    i = 0;
    for ( i = 0; t[i] != '\0'; i++);
    
    return (t);
}