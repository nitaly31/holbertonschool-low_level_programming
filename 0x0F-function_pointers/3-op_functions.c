#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - función de suma.
 *
 * @a: number 1.
 * @b: number 2.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - función de resta.
 *
 * @a: number 1.
 * @b: number 2.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - función de multiplicación.
 *
 * @a: number 1.
 * @b: number 2.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - función de división.
 *
 * @a: number 1.
 * @b: number 2.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf ("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - función de modulo.
 *
 * @a: number 1.
 * @b: number 2.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf ("Error\n");
		exit(100);
	}
	return (a % b);
}
