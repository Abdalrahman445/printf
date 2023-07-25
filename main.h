#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFFSIZE 1024

int my_putchar(char c);
int my_putstr(char *s, int index);
int _printf(const char *format, ...);

#endif

