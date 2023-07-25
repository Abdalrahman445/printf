#include "main.h"
/**
 * _printf - a function that print any type
 * @format: the string in the main printf
 * Return:  the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
int i, printed_chars;
int c;
char buffer[BUFFSIZE];
int index;

va_list ap;
va_start(ap, format);
index = 0, printed_chars = 0;
for (i = 0 ; format[i] != '\0' ; i++)
{
if (format[i] != '%')
{
buffer[index++] = format[i];
if (index == BUFFSIZE)
{
my_putstr(buffer, index);
printed_chars = printed_chars + index, index = 0;
}
}
else
{
my_putstr(buffer, index);
printed_chars = printed_chars + index, index = 0, i++;
if (format[i] == 'c')
{
c = va_arg(ap, char);
my_putchar(c), printed_chars++;
}
else if (format[i] == 's')
{
s = va_arg(ap, char *), my_putstr(s);
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
