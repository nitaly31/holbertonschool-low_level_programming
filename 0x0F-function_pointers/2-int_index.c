#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: array.
 * @size: tamaño del array.
 * @cmp: funtion.
 * Return: -1.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]))
				return (i);
		}
	return (-1);
}
