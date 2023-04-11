#include "main.h"
#include <stdlib.h>

/**
 * create_array - A func. that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of array
 * @c: Initial char
 *
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i;

	if (size == 0)
		return (NULL);

	mem = (char *)malloc(sizeof(char) * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		mem[i] = c;

	return (mem);
}
