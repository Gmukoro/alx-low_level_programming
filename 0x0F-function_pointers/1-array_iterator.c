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
	size_t t;

	if (array && action)
	{
		t = 0;
		while (t < size)
		{
			action(array[t]);
			t++;
		}
	}
}
