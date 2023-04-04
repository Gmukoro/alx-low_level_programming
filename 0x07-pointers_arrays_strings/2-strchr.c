#include "main.h"

/**
* *_strchr - Function that locates a char in a str
* @s: String to be searched
* @c: char being searched for
*
* Return: A pointer else NULL
*/

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
