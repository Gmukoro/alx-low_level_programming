#include "main.h"

/**
 * clear_bit - A function that set bit to 0 at a given index
 * @n: Number of bits
 * @index: Index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitNum = 1;

	if (index > (sizeof(unsigned long int) * 8))

		return (-1);

	bitNum = ~(bitNum << index);

	*n = *n & bitNum;



	return (1);

}
