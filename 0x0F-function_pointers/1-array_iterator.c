#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array.
 *
 * @array: array.
 * @size: tamaño del array.
 * @action: funtion.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
