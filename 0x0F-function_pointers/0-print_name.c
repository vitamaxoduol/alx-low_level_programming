#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function of a pointer
 * 
 * Return: no return. 
 */

void print_name(char *name, void (*f)(char *))

{
if (name && f)
f(name);
}
