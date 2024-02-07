#include "search_algos.h"

/**
 * linear_search - A function that searches for a value
 * in an array of integers.
 * @array: Pointer of given array
 * @size: Size of elements in the array
 * @value: Value to be searched
 * Return: Value, or -1 if value not present
 */

int linear_search(int *array, size_t size, int value)
{
	int it;

	if (array == NULL)
		return (-1);
	for (it = 0; it < (int)size; it++)
	{
		printf("Value checked array[%d] = [%d]\n", it, array[it]);
		if (array[it] == value)
			return (it);
	}
	return (-1);
}
