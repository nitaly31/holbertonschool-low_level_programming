#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user.
 *
 * @s: operation
 * Return: 0.
*/

int (*get_op_func(char *s))(int, int)
{
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
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}
	return (NULL);
}
