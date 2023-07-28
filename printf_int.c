#include "main.h"

/**
 * printf_int - Prints an integer when called by _printf.
 *
 * @ap: Argument type (va_list).
 *
 * Return: Number of characters printed.
 */
int printf_int(va_list ap)
{
	int n = va_arg(ap, int);
	int count = 0;
	int digit;

	if (n < 0)
	{
	n = -n;
	count++;
	}

	do {
		digit = n % 10;
		_putchar(digit + '0');
		count++;
		n = n / 10;
	} while (n > 0);

	if (count == 0) /* Special case for n = 0 */
	{
	_putchar('0');
	count++;
	}

	if (n < 0) /* Print the negative sign */
	{
	_putchar('-');
	count++;
	}

	return (count);
}
