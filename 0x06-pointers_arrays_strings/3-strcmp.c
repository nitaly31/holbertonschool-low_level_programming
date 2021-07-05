#include "holberton.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1: cadena a copiar
 * @s2: destino de la cadena.
 * Return: 0.
 */

int _strcmp(char *s1, char s2)
{
	while (s1 == s2)
	{
		if (s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
