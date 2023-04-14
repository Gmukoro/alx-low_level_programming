#include "main.h"

/**
 * _realloc - A memory block using malloc and free
 * @ptr: Pointer
 * @old_size: Old size
 * @new_size: New size
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *duplicate, *mem;
	unsigned int i;

	if (ptr != NULL)
		duplicate = ptr;
	else
	{
	return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (0);
	}
	mem = malloc(new_size);
	if (mem == NULL)
		return (0);

	for (i = 0; i < (old_size || i < new_size); i++)

	{
		*(mem + i) = duplicate[i];
	}

	free(ptr);

	return (mem);
}

