#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_ array - creates an array of chars
 *
 * @size: size an array
 * @c: cagracter to initialize with
 *
 * Return; NULL or pointer to array
 */

char *create_array(unsigned int size, char c)
{
    char *ptr;
    unsigned int iter = 0;

    if (size == 0)
    return (0);

    ptr = malloc(size * sizeof(char));
    if (ptr == NULL)
    return (0);

    for (; iter < size; iter++)
    *(ptr + iter) = c;   
    return (ptr);
}
