#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees dogs
 * @d: Pointer to the dog
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	else
	free(d->name);
	free(d->owner);
	free(d);
}
