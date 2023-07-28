#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

#define BUFFSIZE 1024

int _printf(const char *format, ...);
int pchar (char c);
int num_len (int num);
int pbinary (unsigned int num);
int pocta (unsigned int num);
int phexa_x (unsigned int num);
int phexa_X (unsigned int num);
int pptr (unsigned int num);
int pstr (char *str);
void pnum (int num);

#endif

