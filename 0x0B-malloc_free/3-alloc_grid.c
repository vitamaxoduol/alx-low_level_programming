#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - two dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: if width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height

{
/*declaring variables*/
int **grid;
int w;
int h;

if (width < 1 || height < 1)

return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
free(grid);
return (NULL);
}

for (w = 0; w < height; w++)
{
grid[w] = malloc(width * sizeof(int));
if (grid[w] == NULL)
{
for (w--; w >= 0; w--)
free(grid[w]);
free(grid);
return (NULL);
}
}

for (w = 0; w < height; w++)
for (h = 0; h < width; h++)
grid[w][h] = 0;

return (grid);
}
