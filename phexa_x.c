#include "main.h"

/**
 * phexa_x - prints a number in hexadecimal base (16).
 * @num: The number to be printed in hexadecimal base.
 * Return: number of printed characters.
 */
int phexa_x (unsigned int num)
{
    int count = 0;
    int j;
    char hexa[8];
    int i;
    int mod;
    if (num == 0)
    {
        pchar ('0');
        return (1);
    }

    

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


    for (j = (i - 1); j >= 0; j--)
    {
        pchar (hexa[j]);
        count++;
    }

    return (count);
}
