#include "main.h"

/**
 * _strcpy - A program that copies string
 * @dest: Ppointer
 * @src: Pointer
 * Return: ...
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
