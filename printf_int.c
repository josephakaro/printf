#include "main.h"

/**
 * printf_int - Prints inter when called bu _printf
 *
 * @ap: Argument type
 *
 * Return: Character to print.
 */

int printf_int(va_list ap)
{
	int n = va_arg(ap, int);
	int count  = 0;
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
	{
		_putchar('-');
		count++;
	}

	return (count);
}
