#include "main.h"
#include <stdio.h>

/**
* print_binary - A function that prints binary rep of a num
* @n: The numbers
*
* Return: Binary rep of numbers
*
*/
void print_binary(unsigned long int n)
{
	if (n > 1)

		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
