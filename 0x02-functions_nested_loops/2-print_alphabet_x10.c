#include "holberton.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
*followed by a new line.
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b < 123; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
