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
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
