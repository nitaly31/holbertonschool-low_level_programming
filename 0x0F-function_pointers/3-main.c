#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - función principal.
 *
 * @argc: parmetro
 * @argv: parametro
 * Return: valores
*/

int main(int argc,char *argv[])
{
	int num1, num2;
	char *operator = (argv[2]);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf ("Error\n");
		exit(98);
	}
	return (printf("%d\n", get_op_func(operator)(num1, num2)));

	if (get_op_func(argv[2] = NULL))
	{
		printf("Error\n");
		exit(99);
	}
}
