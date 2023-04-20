#include "function_pointers.h"

/**
  * int_index - A funct that searches for int
  * @array: Array
  * @size: Num of elements in array
  * @cmp: Pointer to comparison funct.
  *
  * Return: Return index of 1st element if cmd !=0, return
  *  -1 if no matches, return 0 if size <=0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int t = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (t < size)
			{
				if (cmp(array[t]))
					return (t);

				t++;
			}
		}
	}

	return (-1);
}
