#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function
 * to perform the operation asked by the user.
 * @s: The operator passed as an argument to the program
 * Return: A pointer to the function that corresponds
 * to the operator given as a parameter.
 * If the operator is not one of the expected
 * operators (+, -, *, /, %), return NULL.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {

		{"+", op_add},
		{"+", op_sub},
		{"+", op_mul},
		{"+", op_div},
		{"+", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);

		i++;
	}

		printf("Error\n");
		exit(99);
}

