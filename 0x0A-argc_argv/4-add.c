#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - checking - string are digits
 * @str: array str
 *
 * Return: Always 0 (correct)
 */

int check_num(char *str)

{
 /*Declaring variables*/
unsigned int basket;

basket = 0;
while (basket < strlen(str)) /*count string*/

{
if  (!isdigit(str][basket])) /*checking if the the str there are digits*/
{
return (0);
}

basket++;
}
return (1);
}

/**
 * main - Printing the name of the program
 * @argc: Count arguments
 * @argv: Argument values
 *
 * return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

/*Declaring variables*/
int basket;
int str_to_int;
int sum = 0;

basket = 1;
while (basket < argc) /*Goes through the whole array*/
{
if (check_num(argv[basket]))

{
str_to_int = atoi(argv[basket]); /*ATOI --> convert string to int*/
sum += str_to_int;
}

/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}

basket++;
}

printf("%d\n", sum); /*print sum*/

return (0);
}
