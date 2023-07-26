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
	int (*f)(va_list ap);
=======
	int (*f)();
}FormatSpecifier;

int Printf_hexdec(va_list v)
int Printf_HEXDEC(va_list v)
int Printf_binary(va_list v)
int Printf_octdec(va_list v)
int printf(va_list v);
int printf_int(va_list v);
int printf_char(va_list v);
int printf_int(va_list ap);
int printf_string(va_list ap);
int printf_cent(void);
int printf_unsigned(va_list ap);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
