#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to the array, or NULL if it fails.
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);

	while ((copy[i] = str[i]) != '\0')
		i++;

	return (copy);
}
