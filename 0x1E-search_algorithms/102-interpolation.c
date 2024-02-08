#include "search_algos.h"

/**
 * interpolation_search - A prog that searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t post, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		post = (size_t)(low + f);
		printf("Value checked array[%d]", (int)post);

		if (post >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[post]);
		}

		if (array[post] == value)
			return ((int)post);

		if (array[post] < value)
			low = post + 1;
		else
			high = post - 1;

		if (low == high)
			break;
	}

	return (-1);
}
