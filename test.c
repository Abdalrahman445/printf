#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    i = _printf("hello %s %c", "mother fuckers", '@');
    printf("\n%d", i);
    return (0);
}
