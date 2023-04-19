#include <stdlib.h>
#include "dog.h"

/**
 * _copy - A prog that copies of passed in argument
 * @src: Source data
 * Return: The pointer
 */

char *_copy(char *src)
{
	char *mem;

	int i, size;

	if (src == NULL)
	{

		return (NULL);

	}

	for (size = 0; src[size] != '\0'; size++)

		;


	mem = malloc(sizeof(char) * (size + 1));


	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		mem[i] = src[i];
	}
	mem[i] = '\0';
	return (mem);
}

/**
 * new_dog - Creates a new dog variable
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Pointer new dog variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *marks;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	marks = malloc(sizeof(dog_t));
	if (marks == NULL)
	{
		return (NULL);
	}
	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(marks);
		return (NULL);
	}
	(*marks).name = new_name;
	(*marks).age = age;
	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*marks).name);
		free(marks);
		return (NULL);
	}
	(*marks).owner = new_owner;
	return (marks);
}
