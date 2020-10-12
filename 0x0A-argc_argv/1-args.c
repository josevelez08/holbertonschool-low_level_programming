#include "holberton.h"
#include <stdio.h>
/**
 * main - proyecto argv, argc
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 always
 *
 */
int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc - 1);

	return (0);
}
