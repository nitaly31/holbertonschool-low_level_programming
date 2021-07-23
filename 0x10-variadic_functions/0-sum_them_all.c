#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that prints anything.
 *
 * @n: number.
 * Return:valor.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list parametro;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(parametro, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(parametro, int);
	}
	va_end(parametro);

	return (sum);
}
