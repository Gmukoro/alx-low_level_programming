#include "main.h"

/**
* *malloc_checked - A function that allocates memory usin malloc
* @b: The mem allocated
*
* Return: A pointer to the allocated memory block
*/

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
