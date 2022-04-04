#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - checking string if str are digits
 * @str: array str
 *
 * Return: 0
 */

int check_num(char *str)

{
    /*Declaring variables*/
    unsigned int x;

    x = 0;
    while (x < strlen(str)) /*count string*/

    {
    if  (!isdigit(str][x])) /*checking if the the str there are digits*/
    {
        return (0);
    }

    x++;
    }
    return (1)
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
    int x;
    int str_to_int;
    int sum = 0;

    x = 1;
    while (x < argc) /*Goes through the whole array*/
    {
        if (check_num(argv[x]))

        {
            str_to_int = atoi(argv[x]); /*ATOI --> convert string to int*/
            sum += str_to_int;
        }

        /*Condition if one of the number contains symbols that are not digits*/
        else
        {
            printf("Error\n");
            return (1);
        }

        x++;
    }

    printf("%d\n", sum); /*print sum*/

    return (0);
}