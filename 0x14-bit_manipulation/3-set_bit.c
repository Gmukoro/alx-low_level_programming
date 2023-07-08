#include "main.h"

/**
 * set_bit - A program that changes the bit at a particular index using not
 *
 * @n: A pointer to the number to be changed
 * @index: The position to change
 *
 * Return: The new number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n ^= (1 << index);

	return (1);
}
