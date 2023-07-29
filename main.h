#ifndef MAIN_H
#define MAIN_H

/*** Header Files to include in all functions ***/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/*** Used local Buffer of 1024 to call Write ***/

#define BUFFER 1024

/**
 * struct format - Locates the functions.
 *
 * @type: Holds the specifiers (s, c, d, i, u, o, x, X, %)
 * @function: Holds all specified functions.
 *
 * Return: Called Format Specifiers.
 */

typedef struct format
{
	char *type;
	int(*f)();
} Specifier;

/*** Printf and Putchar prototypes ***/

int _printf(const char *format, ...);
int _putchar(char c);

/*** Prototypes Functions ***/

/** 0-Task **/

int printf_str(va_list args);
int printf_char(va_list args);
int printf_percent(void);
int strl(char *str);
int strc(const char *str);

/** 1-Task **/

int printf_dec(va_list ap);
int printf_int(va_list ap);

#endif
