#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - A program that frees a 2 dimensional array.
 * @grid: Multidimensional array of char.
 * @height: Height of array.
 */

void ch_free_grid(char **grid, unsigned int height)

{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - A program that splits a string into words.
 * @str: String to be splitted
 * Return: Pointer to array of strings
 */
char **strtow(char *str)
{
	char **mem;
	unsigned int m, height, i, t, count;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (m = height = 0; str[m] != '\0'; m++)
		if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			height++;
	mem = malloc((height + 1) * sizeof(char *));
	if (mem == NULL || height == 0)
	{
		free(mem);
		return (NULL);
	}
	for (i = count = 0; i < height; i++)
	{
		for (m = count; str[m] != '\0'; m++)
		{
			if (str[m] == ' ')
				count++;
			if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			{
				mem[i] = malloc((m - count + 2) * sizeof(char));

				if (mem[i] == NULL)
				{
					ch_free_grid(mem, i);
					return (NULL);
				}
				break;
			}
		}
		for (t = 0; count <= m; count++, t++)
			mem[i][t] = str[count];
		mem[i][t] = '\0';
	}
	mem[i] = NULL;
	return (mem);
}
