#include "3-calc.h"
/**
 * get_op_func - funtion important
 * @s: operator
 * Return: 0 always
 */
int (*get_op_func(char *s))(int, int) {

	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	if (i == 5)
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
