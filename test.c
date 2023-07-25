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
i = _printf("hello %c my %s", '$', "sugar mumy");
printf("%d", i);
return (0);
}
