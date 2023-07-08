#include "main.h"

/**
 * flip_bits - gets the number of bits needed to be flied to 
 *		convert one number to another
 *
 * @n: the first number to consider
 * @m: the second number to consider
 *
 * Return: the number of bit needed to be flipped
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
