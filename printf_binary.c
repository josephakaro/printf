#include "main.h"

/**
 * printf_binary - Print bainry when called by _printf
 *
 * @v: Argument type binary
 *
 * Return: Binary Values
 */

int printf_binary(va_list v)
{
	int i, flags = 0, con = 0;
	unsigned int num = va_arg(v, unsigned int);

	for (i = 31; i >= 0; i--)
	{
		int bit = (num >> i) & 1;
		if (bit || flags)
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
