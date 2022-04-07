#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory
 * @b: the array number
 * Return: 98
 */
void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);
if (a == NULL)
{
exit(98);

}

return (a);
}
