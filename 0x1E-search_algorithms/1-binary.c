#include "search_algos.h"

/**
 * binary_search - A funct that searches for a value in a sorted array iterative
 * of integers using the Binary search algorithm
 * @array: Pointer to to array
 * @size: Size of elements in the array
 * @value: Value to be searched
 * Return: Value, or -1 if value not present
 */
int binary_search(int *array, size_t size, int value)
{
	int it, left, right;

	if (!array)
		return (-1);
	for (left = 0, right = (int)size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (it = left; it < right; it++)
			printf("%d, ", array[it]);
		printf("%d\n", array[it]);

		it = left + (right - left) / 2;
		if (array[it] == value)
			return (it);
		if (array[it] > value)
			right = it - 1;
		else
			left = it + 1;
	}
	return (-1);
}
