#include "holberton.h"

/**
 * _islower - These functions check whether c,falls into a
 *certain character class according to the current locale.
 *
 * @c: It is the Caracter ASCII imprimible.
 *
 * Return: 1 or 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
