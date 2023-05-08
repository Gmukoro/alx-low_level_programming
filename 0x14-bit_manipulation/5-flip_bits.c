#include "main.h"

/**
 * flip_bits - A  function that returns the number of bit-
 * s you would need to flip to get from one number to another.
 * @n: The number of flips to flip to get m.
 * @m: The number to being checked.
 * Return: The flip num result.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int opp, numBits = 0;

	opp = n ^ m;

	while (opp > 0)
	{
		numBits += (opp & 1);
		opp >>= 1;
	}

	return (numBits);
}
