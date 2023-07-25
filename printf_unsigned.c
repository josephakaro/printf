#include "main.h"

/**
 * printf_unsigned - Prints Unsigned integer when called by _printf
 *
 * @ap: Argument list
 *
 * Return: Nth Character
 */

int printf_unsigned(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int count = 0;
	int digit;

	do {
		digit = n % 10;
		_putchar(digit + '0');
		count++;
		n = n / 10;
	} while (n > 0);

	return (count);
}
