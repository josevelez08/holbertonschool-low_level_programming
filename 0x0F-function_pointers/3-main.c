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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);



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
	printf("%i\n", result);

	return (0);
}
