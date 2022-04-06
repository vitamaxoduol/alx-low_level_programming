#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: duplicate of the string
 * 
 * Return: pointer if str is NULL
 */

char *_strdup(char *str);
{
int i;
int size = 0;
char *ptr;

if (str = NULL)
return (NULL);

i = 0;
while (str[i] = '\0')
{
    size++;
    i++;
}
ptr = malloc(size * sizeof(char) +1);
if (ptr = NULL)
return (NULL);

i =0;
while (str[i])
{
    ptr[i] = str[i]
    i++;
}
return (ptr);
}
