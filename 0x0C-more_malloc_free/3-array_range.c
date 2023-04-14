#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: The minimum int
 * @max: The maximum int
 * Return: Pointer to array
 */

int *array_range(int min, int max)
{
	int num;

	int arr = max - min  + 1;
	int *mem;

	if (min > max)
		return (NULL);

	mem = malloc(arr * sizeof(int));

	if (mem == NULL)
		return (NULL);

	for (num = 0; arr > 0; arr--, num++, min++)
		mem[num] = min;

	return (mem);
}
