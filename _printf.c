#include "main.h"
/**
 * _printf - a function that print any type
 * @format: the string in the main printf
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
int i, printed_chars, len, index;
char buffer[BUFFSIZE], c, *s;

va_list ap;
va_start(ap, format);
index = 0, printed_chars = 0;
if (!format || !format[0])
	return (-1);
for (i = 0 ; format[i] != '\0' ; i++)
{
if (format[i] != '%')
{
buffer[index++] = format[i];
if (index == BUFFSIZE)
{
printed_chars += my_putstr(buffer), index = 0;
}
}
else
{
printed_chars += my_putstr(buffer);
index = 0, i++;
if (format[i] == 'c')
{
c = va_arg(ap, int);
my_putchar(c), printed_chars++;
}
else if (format[i] == 's')
{
s = va_arg(ap, char *);
printed_chars += my_putstr(s);
}
else if (format[i] == '%')
{
my_putchar('%'), printed_chars++;
}
}
}
va_end(ap);
return (printed_chars);
}
