#include "main.h"
#include <stdlib.h>

/**
* free_grid - A prog that frees allocated memory
* @grid: Allocated memory
* @height: Height of allocated memory
*
* Return: Nothing(void)
*/

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(grid[count]);
	free(grid);

}
