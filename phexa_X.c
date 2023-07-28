#include "main.h"

/**
 * phexa_X - prints a number in hexadecimal base (16).
 * @num: The number to be printed in hexadecimal base.
 * Return: number of printed characters.
 */

int phexa_X(unsigned int num)
{
int count = 0;
if (num == 0)
{
pchar ('0'), return (1);
}
char hexa[(((sizeof(int) * 8)) / 4)], int i;
for (i = 0; num > 0; i++)
{
int mod = (num % 16);
if (mod >= 0 && mod <= 9)
{
hexa[i] = (mod + '0');
}
else
{
switch (mod)
{
case 10:
hexa[i] = 'A', break;
case 11:
hexa[i] = 'B', break;
case 12:
hexa[i] = 'C', break;
case 13:
hexa[i] = 'D', break;
case 14:
hexa[i] = 'E', break;
case 15:
hexa[i] = 'F', break;
}
}
num = num / 16;
}
int j;
for (int j = (i - 1); j >= 0; j--)
{
pchar (hexa[j]), count++;
}
return (count);
}
