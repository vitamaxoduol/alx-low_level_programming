#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: return the sum
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int n = j;
int val;
va_list ls;

va_start(ls, n);

for (j = 0; j < n; j++)
{
val = va_arg(ls, int);
printf("%d", val);
if (separator != NULL)
{
if (j != (n - 1))
printf("%s", separator);
}
}
printf("\n");
va_end(ls);
return;
}
