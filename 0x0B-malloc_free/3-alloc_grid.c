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

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            for (i--; i >= 0; i--)
                free(grid[i]);
            free(grid);
            return (NULL);
        }
    }

    for (i = 0; i < height; i++)
        for (j = 0; j < width; j++)
            grid[i][j] = 0;

    return (grid);
}
