#include "main.h"
/**
 * num_len - a function to get the lenght of the number
 * @num: the number we want to get the length of it
 * Return: the len
 */
int num_len (int num)
{
if ((num + '0') >= '0' && (num + '0') <= '9')
	return (1);

return (1 + (num_len(num / 10)));
}
