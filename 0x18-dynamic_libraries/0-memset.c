#include "main.h"
/**
 *_memset - A program fills memory with a constant byte
 *@s: Pointer block of memory to fill
 *@b: Value to set
 *@n: Bytes of the memory
 *Return: Dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
