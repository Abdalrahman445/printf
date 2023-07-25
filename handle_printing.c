#include "main.h"
/**
 * handle_printing - a function to handle the specifiers
 * @format: the string in printf
 * @i: the counter
 * @ap: the args
 * Return: the num of printed characters
 */
int handle_printing(const char *format, int i, va_list ap)
{
char c, *s, E;
int len;
int printed_chars;

printed_chars = 0;
if (format[i] == 'c')
{
c = va_arg(ap, int);
my_putchar(c);
printed_chars++;
}
else if (format[i] == 's')
{
s = va_arg(ap, char *);
len = 0;
while (s[len] != '\0')
	len++;
printed_chars += my_putstr(s, len);
len = 0;
}
else if (format[i] == '%')
{
my_putchar('%');
printed_chars++;
}
else if (format[i] == ' ' || format[i] == '\0')
{
return (-1);
}
else
{
E = format[i], my_putchar('%'), my_putchar(E);
return (2);
}
return (printed_chars);
}
