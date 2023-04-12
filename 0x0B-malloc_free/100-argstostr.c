#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments
 * @ac: Arguments count
 * @av: Arguments vector
 *
 * Return: A pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *mem, *m;
	int i, t, k, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		m = av[i];
		t = 0;

		while (m[t++])
			length++;
		length++;
	}

	mem = (char *)malloc(sizeof(char) * (length + 1));
	if (mem == NULL)
		return (NULL);

	for (i = 0, t = 0; i < ac && t < length; i++)
	{
		m = av[i];
		k = 0;

		while (m[k])
		{
			mem[t] = m[k];
			k++;
			t++;
		}
		mem[t++] = '\n';
	}
	mem[t] = '\0';

	return (mem);
}
