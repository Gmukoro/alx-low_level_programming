#include "main.h"

/**
 * _strpbrk - function that searches a string for a set of byte
 * @s: The byte being compared
 * @accept: Location to search bytes from
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int t;
		while (*s)
		{
			for (t = 0; accept[t]; t++)

				if (*s == accept[t])
					return (s);

			s++;
		}
	return (NULL);
}
