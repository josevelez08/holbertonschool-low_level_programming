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
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
