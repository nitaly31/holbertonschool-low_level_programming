#include "lists.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n:number
 * @index: Index, starting from 0 of the bit you want to get
 * Return: The value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 64)
	{
		return (-1);
	}
	else if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
