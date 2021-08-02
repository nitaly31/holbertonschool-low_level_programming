#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings- Function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: is a void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int i;
	char *string;

	va_start(argumentos, n);

	i = 0;
	while (i < n)
	{
		string = va_arg(argumentos, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && (separator != NULL))
			printf("%s", separator);
	i++;
	}
	printf("\n");
	va_end(argumentos);
}
