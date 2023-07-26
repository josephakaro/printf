#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

typedef  struct format
{
	char *place;
	int (*f)();
}FormatSpecifier;

extern int print_int(va_list v);
extern int printf_char(va_list v);
extern int printf_int(va_list ap);
extern int printf_string(va_list ap);
extern int printf_cent(void);
extern int printf_unsigned(va_list ap);
extern int _putchar(char c);
extern int _printf(const char *format, ...);

#endif
