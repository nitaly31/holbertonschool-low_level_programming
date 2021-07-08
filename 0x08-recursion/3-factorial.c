#include "holberton.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: number.
 * Return: number.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	n = n * factorial((n - 1));
	return (n);
}
