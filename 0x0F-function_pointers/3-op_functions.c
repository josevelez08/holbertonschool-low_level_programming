#include "3-calc.h"
/**
 * op_add - checker the code
 * @a: first number
 * @b: second number
 * Return: 0 always
 */
int op_add(int a, int b)
{

	return (a + b);
}
/**
 * op_sub - checker the code
 * @a: first number
 * @b: second number
 * Return: 0 always
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - checker the code
 * @a: first number
 * @b: second number
 * Return: 0 always
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - checker the code
 * @a: first number
 * @b: second number
 * Return: 0 always
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - checker the code
 * @a: first number
 * @b: second number
 * Return: 0 always
 */
int op_mod(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
