#include "main.h"
/**
 * _printf - a function that works similar to printf function.
 * @format: string to be printed.
 * Return: number of printed characters.
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
if (*format == NULL)
return (-1);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
count += pchar(c);
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
count += pstr(str);
}
else if (*format == '%')
{
pchar('%');
count++;
}
else if (*format == 'i' || *format == 'd')
{
int num = va_arg(args, int);
if (num < 0)
count++;
pnum(num);
count += num_len(num);
}
else if (*format == 'b')
{
int num = va_arg(args, int);
count += pbinary(num);
}
else if (*format == 'u')
{
unsigned int num = va_arg(args, unsigned int);
pnum(num);
count += num_len(num);
}
else if (*format == 'o')
{
int num = va_arg(args, int);
count += pocta(num);
}
else if (*format == 'x')
{
int num = va_arg(args, int);
count += phexa_x(num);
}
else if (*format == 'X')
{
int num = va_arg(args, int);
count += phexa_X(num);
}
else if (*format == 'p')
{
void *ptr = va_arg(args, void *);
count += pptr((unsigned int)ptr);
}
else
{
char c = va_arg(args, char);
pchar(c);
count++;
}
}
else
{
pchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
