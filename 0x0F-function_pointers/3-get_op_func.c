#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user.
 *
 * @s: pointer
 * Return: 0.
*/

int (*get_op_func(char *s))(int, int)
