#include "main.h"
/**
 *_strlen_recursion - length of the  string
 *@s: pointer block of memory to fill
 *Return: void
 */

int _strlen_recursion(char *s)
{

/*Base condition*/
if  (*s == '\0')
return (0);

else
return (1 + _strlen_recursion(s + 1)); /*Sum 1*/
}
