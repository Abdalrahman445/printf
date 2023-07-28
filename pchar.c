#include "main.h"
/**
 * pchar - function to print characters
 * @c: the char we want to print
 * Return: the print
 */
int pchar (char c)
{
return (write(1, &c, 1));
}
