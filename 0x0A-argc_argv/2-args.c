#include <stdio.h>
#include "main.h"

/**
 * main - print the result of the multiplication
 * @argc: counting the arguements
 * @argv: arguements of values
 *
 * Return: 0 (correct)
 */

int main(int argc, char *argv[])
{
/*Declares variables*/
int i = 0;

if (argc > 0)
{
/*To print each arguement*/
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
}
return (0)
}
