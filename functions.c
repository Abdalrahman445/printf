#include "main.h"
/**
 * my_putchar - Prints a single character.
 * @c: The character to be printed.
 * Return: 1
 */
int my_putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * my_putstr - Prints a string.
 * @s: The string to be printed.
 * @index: The number of characters
 * Return: The number of printed characters.
 */
int my_putstr(char *s, int index)
{
int counter;

for (counter = 0; counter < index; counter++)
{
my_putchar(s[counter]);
}
return (counter);
}
