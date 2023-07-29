#include "main.h"

/**
 * printf_char - Prints a character when called by _printf.
 *
 * @v: Argument type (va_list).
 *
 * Return: Always 1 (success).
 */
int printf_char(va_list v)
{
	char c;

	c = va_arg(v, int);
	_putchar(c);
	return (1);
}
