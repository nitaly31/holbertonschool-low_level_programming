#include "holberton.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 *
 * @str: in reverse.
 */

void print_rev(char *str)
{
	int i = 0;
	int total_caracteres;

	while (str[i] != 0)
	{
		i++;
	}
	total_caracteres = i;

	for (int  c = 0; c < total_caracteres + 1; c++)
	{
		putchar (str[total_caracteres - c]);
	}

	putchar ('\n');
}
