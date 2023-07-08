#include "main.h"

/**
 * binary_to_uint - A program that converts a binary number to an unsigned int
 * @b: The character to be converted
 *
 * Return: The converted character
 */

unsigned int binary_to_uint(const char *b)
{
	int numb;
	int length_of_char = 0;
	int raised_to_two;
	unsigned int conv_value;

	if (!b)
	{
		return (0);
	}
	for (numb = 0; b[numb]; numb++)
	{
		if (b[numb] != '1' && b[numb] != '0')
		{
			return (0);
		}
		length_of_char++;
	}
	conv_value = 0;
	raised_to_two = 1;

	while (length_of_char > 0)
	{
		if (b[(length_of_char) - 1] == '1')
		{
			conv_value += raised_to_two;
		}
		raised_to_two *= 2;
		length_of_char--;
	}
	return (conv_value);
}
