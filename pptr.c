#include "main.h"
/**
 * pptr - prints the address of a pointer.
 * @num: the decimal value of the address to be printed.
 * Return: number of printed characters.
 */
int pptr(unsigned int num)
{
int count = 0;
char hexa[sizeof(void *) * 2];
int k;
int i;
int mod;
int j;
for (k = 0; k < 16; k++)
hexa[k] = '0';

for (i = 0; num > 0; i++)
{
mod = (num % 16);
if (mod >= 0 && mod <= 9)
{
hexa[i] = (mod + '0');
}
else
{
switch (mod)
{
case 10:
hexa[i] = 'a';
break;
case 11:
hexa[i] = 'b';
break;
case 12:
hexa[i] = 'c';
break;
case 13:
hexa[i] = 'd';
break;
case 14:
hexa[i] = 'e';
break;
case 15:
hexa[i] = 'f';
break;
}
}
num = num / 16;
}
count += pstr("0x");
for (j = i - 1; j >= 0; j--)
{
pchar (hexa[j]), count++;
}
return (count);
}
