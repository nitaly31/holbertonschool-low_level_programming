#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *  print_numbers - prints out numbers given
 * @separator: string to be seperated between numbers
 * @n: number of arguements
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argumentos;
	unsigned int i;
	int number;

	va_start(argumentos, n);

	i = 0;
	while (i < n)
	{
		number = va_arg(argumentos, int);
		printf("%d", number);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	i++;
	}
	printf("\n");
	va_end(argumentos);
}
