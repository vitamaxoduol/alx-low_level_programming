#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string
 *
 * Return: pointer of array of chars
 */
char *_strdup(char *str)
{
char *cat;
unsigned int i, j;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;
cat = (char *)malloc(sizeof(char) * (i + 1));

if (cat == NULL)
return (NULL);

for (j = 0; j <= i; j++)
cat[j] = str[j];

return (cat);
}
