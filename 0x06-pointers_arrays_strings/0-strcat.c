#include "main.h"

/**
* _strcat - A function that concatenates 2 strings
* @dest: Destination string
* @src: Source string to append
*
* Return: destination string
*/

char *_strcat(char *dest, char *src)
{
	int destLength = 0;
	int srcLength = 0;

	int length;

	for (length = 0; dest[length] != '\0'; length++)
		destLength++;
	for (length = 0; src[length] != '\0'; length++)
		srcLength++;
	for (length = 0; length <= srcLength; length++)
		dest[destLength + 1] = src[length];
	return (dest);
}
