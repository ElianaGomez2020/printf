#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ch);
int print_str(va_list str);
int print_int(va_list arg);

#endif /* HOLBERTON_H */
