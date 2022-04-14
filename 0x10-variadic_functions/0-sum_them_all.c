#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: unsigned int constant
 * 
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{

unsigned int sum = 0, i;
va_list ls;

va_start(ls, n);

for (i = 0; i < n; i++)
sum += va_arg(ls, int);

va_end(ls);

return (sum);

if (n == 0)
return (0)
}
