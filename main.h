#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_print(const char *format, int *i, va_list list);

/* The Functions to print chars, numbers and strings */
int print_char(va_list types);
int print_string(va_list types);
int print_percent(va_list types);
int print_int(va_list types);

#endif
