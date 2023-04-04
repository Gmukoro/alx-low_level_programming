#include "main.h"

/**
* *_memset - A function that fills memory with a constant byte
* @s: Memory to be filled
* @b: The constant byte
* @n: The first bytes of the memory
*
* Return: Memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t = 0;

	while (t < n)
	{
		s[t] = b;
		t++;
	}
	return (s);

}
