#inlcude "main.h"
/**
 * pocta - a function to print the number we want in octa
 * @num: the number we want to print in octa
 * Return: the number of the printed digits
 */
int pocta(unsigned int num)l
{
int count = 0;
int j;
int i;
char octa[(((sizeof(int) * 8)) / 3) + 1];

if (num == 0)
{
pchar ('0');
return (1);
}
for (i = 0; num > 0; i++)
{
octa[i] = ((num % 8) + '0');
num = num / 8;
}
for (int j = (i - 1); j >= 0; j--)
{
pchar (octa[j]);
count++;
}
return (count);
}
