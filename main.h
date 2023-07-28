#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

/**
 * struct format - Holds list og an array of functions
 *
 * @place: Holds IDs.
 * @f: Holds functions.
 *
 * Return: Format specifier.
 */

typedef  struct format
{
	char *place;
	int (*f)();
} FormatSpecifier;

int printf_pointer(va_list v);
int printf_Xstring(va_list v);
int printf_reverse(va_list ap);
int printf_rt13(va_list va);
int printf_hexdec(va_list v);
int printf_aux_h(unsigned long int num);
int printf_HEXDEC(va_list v);
int printf_binary(va_list v);
int printf_octdec(va_list v);
int printf_char(va_list v);
int printf_int(va_list ap);
int printf_string(va_list ap);
int printf_cent(void);
int printf_unsigned(va_list ap);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
