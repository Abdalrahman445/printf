#include "main.h"
/**
 * pnum - a function to print the numbers
 * @num: the number we want to print
 */
void pnum (int num)
{
if (num == INT_MIN)
{
pchar ('-');
pchar ('2');
pnum (147483648);
return;
}
if (num < 0)
{
pchar ('-');
num = -num;
}
if (num >= 0 && num <= 9)
{
pchar(num + '0');
}
else
{
pnum (num / 10);
pnum (num % 10);
}
}
