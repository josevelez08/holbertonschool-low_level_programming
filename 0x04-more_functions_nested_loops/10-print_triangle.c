#include "holberton.h"
/**
 *print_triangle - prints triangles
 *@size: test varible
 *
 *Description: print triangle
 *Return: void
 */
void print_triangle(int size)
{
int spaces = 1;
int pounds = 1;
int rows = 1;

if (size <= 0)
{
_putchar('\n');
return;
}

while (rows <= size)
{
spaces = 1;
pounds = 1;
while (spaces <= (size - rows))
{
_putchar(' ');
spaces++;
}
while (pounds <= rows)
{
_putchar('#');
pounds++;
}
_putchar('\n');
rows++;
}
}
