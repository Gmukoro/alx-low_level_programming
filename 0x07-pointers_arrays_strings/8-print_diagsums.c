#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function prints the sums 2 diags. of sqr matrix of int
 * @a: pointer to start of the matrix
 * @size: width of the matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int z, y, p, t = 0, u = 0;

	for (z = 0; z < size; z++)
	{
		p = (z * size) + z;
		t += *(a + p);
	}
	for (y = 0; y < size; y++)
	{
		p = (y * size) + (size - 1 - y);
		u += *(a + p);
	}
	printf("%i, %i\n", t, u);
}
