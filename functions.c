#include "main.h"
/** 
 * my_putchar - Prints a single character.
 * @c: The character to be printed.
 * Return: 1
 */
int my_putchar(char c){

    return( write(1, &c, 1) );
}

/**
 * my_putstr - Prints a string.
 * @s: The string to be printed.
 * Return: The number of printed characters.
 */
int my_putstr (char *s){

    int counter = 0;

    if (s == NULL)
    {
        my_putstr("(null)");
        return 6;

    }
    while( s[counter] )
    {
        my_putchar(s[counter]);
        counter++;
    }

    return counter;
}

