#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 *@min: values
 *@max: values
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *arr, j = 0, i = min;
if (min > max)
return (0);
arr = malloc((max - min + 1) * sizeof(int));

if (!arr)
return (0);
while (j <= max - min)
arr[j++] = i++;
return (arr);
}
