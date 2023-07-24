#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


extern int printf_pointer(va_list val);
extern int printf_hex_aux(unsigned long int num);
extern int printf_HEX_aux(unsigned int num);
extern int printf_exclusive_string(va_list val);
extern int printf_HEX(va_list val);
extern int printf_hex(va_list val);
extern int printf_oct(va_list val);
extern int printf_unsigned(va_list args);
extern int printf_bin(va_list val);
extern int printf_srev(va_list args);
extern int printf_rot13(va_list args);
extern int printf_int(va_list args);
extern int printf_dec(va_list args);
extern int _strlen(char *s);
extern int *_strcpy(char *dest, char *src);
extern int _strlenc(const char *s);
extern int rev_string(char *s);
extern int _strlenc(const char *s);
extern int printf_37(void);
extern int printf_char(va_list val);
extern int printf_string(va_list val);
extern int _putchar(char c);
extern int _printf(const char * const format, ...);

#endif
