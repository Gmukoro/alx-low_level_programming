#include "main.h"

/**
* binary_to_uint - A function that converts a binary number to an unsigned int
* @b: Pointer to a string
*
* Return: Unsigned int converted
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;

	if (b == 0)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		ans = ans << 1;
		if (*b == '1')
			ans |= 1;
		b++;
	}

	return (ans);
}
