#include "main.h"

/**
 * _strstr - A function that locates a substring
 *
 * @haystack: String being searched
 * @needle: Substring being searched for
 *
 * Return: a pointer to the begining of substring or Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int z = 0, x = 0;

	while (haystack[z])
	{
		while (needle[x] && (haystack[z] == needle[0]))
		{
			if (haystack[z + x] == needle[x])
				x++;
			else
				break;
		}
		if (needle[x])
		{
			z++;
			x = 0;
		}
		else
			return (haystack + z);
	}
	return (0);
}
