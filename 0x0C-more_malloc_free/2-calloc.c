#include "main.h"

/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: Numbers of element in the array
 * @size: bytes for each element in the array
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (t = 0; t < nmemb * size; t++)
		mem[t] = 0;

	return (mem);
}
