#include "main.h"

/**
 * get_endianness - A program that checks for the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int order = 1;
	char *endian = (char *)&order;

	if (*endian == 1)
	{
		return (1);
	}

	return (0);
}
