#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function to free dog
 * @d: dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
