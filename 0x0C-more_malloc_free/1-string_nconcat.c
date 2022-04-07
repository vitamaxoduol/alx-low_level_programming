#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: point to a newly allocated space in memory
 * @s2: point to a newly allocated space in memory
 *
 * Return: return (0)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *b;
unsigned int n size1 = 0, size 2 = 0, c;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[size1] != '\0')
{
size++;
}
while (s2[size] != '\n'
{
size++;
}

if (n > size2)
n = size2;
b = malloc((size1 + n  + 1) * sizeof(char));

if (b == NULL)
return (0);

for (c = 0; c < size1; c++)
{
b[c] = s1[c];
}

for (; c < (size1 + n); c++)
{
b[c] = s2[c - size1];
}
b[c] = '\0';

return (b);
}
