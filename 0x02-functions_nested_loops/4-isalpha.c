#include "holberton.h"
/**
 * _isalpha - Indicates if a character is alphabetic
 *
 * @c: Caracter ASCII imprimible
 *
 * Return : 1 si c es una letra, minúscula o mayúscula, de lo contrario 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
