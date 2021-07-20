#include <stdio.h>
#include "dog.h"

/**
 * print_dog - information about dogs
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: "(nil)"\n");
		else
			printf("Name: %s\n", d->name);

		printf("age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: "(nil)"\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
