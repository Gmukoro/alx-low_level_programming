#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - A function that execute a function given as a
* parameter on each element of an array
* @array: Array of functions
* @size: Size of array
* @action: Pointer to array of functions
*
* Return: Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int t;

	if (array == 0 || size == 0)
		return;
	for (t = 0; t < size; t++)

	{
		action(array[t]);
	}
}
