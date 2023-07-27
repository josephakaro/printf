#include "main.h"

/**
 * printf_HEXDEC - print hexadecimal when called by _printf
 *
 * @v: argument type
 *
 * Return: Prints hexadecimal
 */

int printf_HEXDEC(va_list v)
{
	int flags = 0, con = 0;
	unsigned int i, num = va_arg(v, unsigned int);

	for (i = 31; i > 0; i--)
	{
		int bit = (num >> i) & 1;

		if (flags || bit)
		{
			flags = 1;

			_putchar(bit + '0');
			con++;
		}
	}

	if (con == 0)
	{
		con++;
		_putchar('0');
	}

	return (con);
}
