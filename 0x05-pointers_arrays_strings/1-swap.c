#include "main.h"

/**
* swap_int - A program that swapsthe values of two integers
* @a: The first int
* @b: The second int
*
* Return: Always 0
*/

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
