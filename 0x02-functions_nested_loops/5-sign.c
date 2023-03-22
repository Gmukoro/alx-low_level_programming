#include "main.h"

/**
 * print_sign - Entry point
 * Description: A function that determines if the input is 0, greater than 0
 * or less than 0
 *
 * Return: Returns 1 and print x if n is greater than 0, returns 0 and print
 * s 0 if n is 0 else prints 0
 *
 * @n: The input integer
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
