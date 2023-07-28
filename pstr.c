#include "main.h"
/**
 * pstr - afunction to print strings
 * @str: the string we want to print
 * Return: the count of the printed characters
 */
int pstr (char *str)
{
int count;

if (str == NULL)
{
pstr ("(null)");
return (6);
}
for (count = 0; *str != '\0'; str++)
{
pchar (*str);
count++;
}
return (count);
}
