#include "dog.h"
#include <stdlib.h>

/**
* init_dog - A function that initializes a variable struct dog
* @d: Array
* @name: Name of dog
* @age: Age of dog
* @owner: Owner of dog
*
* Return: Void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;


	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
