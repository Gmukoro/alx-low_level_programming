#include "main.h"

/**
 * get_bit - A function that returns the value of a bit
 * @n: Number of bits
 * @index: Index
 * Return: 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit2get, get;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	get = n >> index;

	bit2get = get & 1;

	return (bit2get);

}
