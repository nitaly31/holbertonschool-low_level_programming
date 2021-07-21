#include <stdio.h>
#include "dog.h"

/**
 * print_dog - information about dogs
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		(*d).name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);

	printf("age: %6f\n", d->age);

	printf("Owner: %s\n", d->owner);

}
