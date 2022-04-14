#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of strings passed to the function
 * @separator: string to be printed between numbers
 * Return: return a string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
char *val;
va_list ls;

va_start(ls, n);

for (x = 0; x < n; x++)
{
val = va_arg(ls, char *);
if (val != NULL)
printf("%s", val);
else
printf("(nil)");

if (separator != NULL)
{
if (x != (n - 1))
printf("%s", separator);
}
}
printf("\n");
va_end(ls);
return;
}
