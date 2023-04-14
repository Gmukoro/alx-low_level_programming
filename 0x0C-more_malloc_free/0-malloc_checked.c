#include "main.h"

/**
* *malloc_checked - A function that allocates memory usin malloc
* @b: The mem allocated
*
* Return: A pointer to the allocated memory block
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(sizeof(b));

	if (mem == NULL)
	{
		malloc_checked(98);
	}
	return (mem);
}
