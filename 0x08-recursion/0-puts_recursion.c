#include "main.h"

/**
 *_puts_recursion - printing a string
 *@s: pointer block of memory to fill
 *Return: void
 */
void _puts_recursion(char *s)

{
if (*s == '\0')
{
_putchar('\n);
return;
}
_putchar(*s);
_put_recurssion(s + 1);

}
