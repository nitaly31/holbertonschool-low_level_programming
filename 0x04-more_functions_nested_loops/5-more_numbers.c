#include "holberton.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: Always 0 (Success).
 */

void more_numbers(void)
{
	int i;
	char n;

	for (i = 0; i > 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
