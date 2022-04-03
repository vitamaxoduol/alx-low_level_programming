#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print program that multiplies two numbers
 * @argc: counting the arguements
 * @argv: arguement of vectors
 *
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
int x, y;
if (argc == 5)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x *y);
return (0);
}
printf("Error\n");
return (1);
}