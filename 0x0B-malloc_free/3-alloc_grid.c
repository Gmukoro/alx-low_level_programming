#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A prog that returns a poi
 * nter to a 2 dimensional array of integers.
 * @width: Width of array
 * @height: Height of array
 *
 * Return: Pointer to a 2 dimensional array of int.
 */
int **alloc_grid(int width, int height)
{
	int **intArray, i, t;
	int length = width * height;

	if (length <= 0)
		return (NULL);

	intArray = (int **)malloc(sizeof(int *) * height);
	if (intArray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		intArray[i] = (int *)malloc(sizeof(int) * width);
		if (intArray[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(intArray[i]);
			free(intArray);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (t = 0; t < width; t++)
			intArray[i][t] = 0;

	return (intArray);
}

