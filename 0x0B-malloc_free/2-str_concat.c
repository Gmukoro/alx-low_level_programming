#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: A pointer to a allocated block in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, t, strlen1, strlen2, length;
	char *dest;

	strlen1 = strlen2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			strlen1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			strlen2++;
	}

	length = strlen1 + strlen2;
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < strlen1; i++)
		dest[i] = s1[i];
	for (t = 0; t < strlen2; t++, i++)
		dest[i] = s2[t];
	dest[length] = '\0';

	return (dest);
}

