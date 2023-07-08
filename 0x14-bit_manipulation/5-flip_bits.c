#include "main.h"

/**
 * flip_bits - A program that gets the number of bits needed to be flippedd to
 *		convert one number to another
 *
 * @n: The first number to be considered
 * @m: The second number to be considered
 *
 * Return: The number of bit needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned long int flipped_bit;

	flipped_bit = 0;
	while (flip > 0)
	{
		flipped_bit += (flip & 1);
		flip >>= 1;
	}

	return (flipped_bit);
}
