#include "main.h"
/**
 * _printf - a function that print any type
 * @format: the string in the main printf
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
int i, printed_chars, index, j;
char buffer[BUFFSIZE];

va_list ap;
va_start(ap, format), index = 0, printed_chars = 0;
if (format == NULL)
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
buffer[index++] = format[i];
if (index == BUFFSIZE)
	printed_chars += my_putstr(buffer, index), index = 0;
}
else
{
printed_chars += my_putstr(buffer, index), index = 0, i++;
j = handle_printing(format, i, ap);
if (j == -1)
	return (-1);
printed_chars += j;
}
}
va_end(ap);
return (printed_chars);
}
