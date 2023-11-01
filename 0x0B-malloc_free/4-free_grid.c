#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free 2 diamensional grid
 * @grid: double pointer to  2 diamensional grid
 * @height: height of grid
 * Return: Nothing
*/

void free_grid(int **grid, int height)
{
int h;

for (h = 0; h < height; h++)
free(grid[h]);
free(grid);
}
