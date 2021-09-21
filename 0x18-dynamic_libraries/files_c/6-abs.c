#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @i: number.
 *
 * Return: a function that computes the absolute value of an integer.
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
