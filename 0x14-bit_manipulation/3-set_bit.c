#include "main.h"

/**
 * set_bit - A function that sets value of bit to 1
 * @n: Numbers of bits
 * @index: Index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int binNum = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	binNum <<= index;

	*n = *n | binNum;
	return (1);
}
