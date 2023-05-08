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
	unsigned long int test = 1UL << (sizeof(unsigned long int)*8 - 1);

	while (test)
	{
        	if (n & test)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	test >>= 1;
	}
}
