#include "main.h"

/**
* *_memcpy - A program that copies memory area
* @dest: Destinatin string
* @src: Source string
* @n: Bytes to be copied
*
* Return: Destination string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t = 0;

	while (t < n)
	{
		dest[t] = src[t];
		t++;
	}
	return (dest);
}
