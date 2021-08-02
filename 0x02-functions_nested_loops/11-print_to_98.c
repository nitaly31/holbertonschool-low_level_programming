#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: num integer
 *
 * Return: the value of the last digit.
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
