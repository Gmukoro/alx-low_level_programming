#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: Source string
 *
 * Return: Returns a pointer to the duplicated string.
 * otherwise returns NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *memCopy;
	int i, strlen = 0;

	if (str == NULL)
		return (NULL);

	while (str[strlen] != '\0')
		strlen++;

	memCopy = (char *)malloc((sizeof(char) * strlen) + 1);
	if (memCopy == NULL)
		return (NULL);

	for (i = 0; i < strlen; i++)
		memCopy[i] = str[i];
	memCopy[strlen] = '\0';

	return (memCopy);
}

