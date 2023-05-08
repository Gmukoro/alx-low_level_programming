#include "main.h"

/**
 * get_endianness - A function that checks if multibyte data is the endianness.
 * Return: Big-endianess returns 0, while little-endian returns 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endianess = (char *)&num;

	if (*endianess == 1)
		return (1);
	return (1);
}
