#include "main.h"
/**
 * pbinary - a function to print the binary number
 * @num: the number we want to print in binary
 * Return: the number of digits of the printed numbers
 */
int pbinary(unsigned int num)
{
int count = 0;
int j;
int i;
char binary[(sizeof(unsigned int) * 8)];

if (num == 0)
{
pchar ('0');
return (1);
}
for (i = 0; num > 0; i++)
{
if (num % 2 == 0)
{
binary[i] = '0';
}
else
{
binary[i] = '1';
}
num = num / 2;
}
for (j = (i - 1); j >= 0; j--)
{
pchar (binary[j]);
count++;
}
return (count);
}
