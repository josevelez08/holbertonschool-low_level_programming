#include "function_pointers.h"
/**
 * print_name - print name
 * @name: pointer to char
 * @f: funtion to pinter
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != '\0')
	{
		f(name);
	}
}
