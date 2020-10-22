#include "3-calc.h"
/**
 * main - checker the code
 * @argc: size
 * @argv: array
 * Return: 0 always
 */
	int main(int argc, char *argv[])
{
int num1;
int num2;
int result;

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error %d\n", argc);
		exit(98);
	}


	result = get_op_func(argv[2])(num1, num2);
	if (result == 0)
	{
		printf("%d\n", result);
		return (0);
	}
	if (result == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result);

	return (0);
}
