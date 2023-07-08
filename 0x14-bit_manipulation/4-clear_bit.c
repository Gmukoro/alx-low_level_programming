#include "main.h"

/**
 * clear_bit - A program that sets the bit at a location to 0
 *
 * @n: A pointer to the number to be converted
 * @index: The location of bit to be changed
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
