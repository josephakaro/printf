#include "main.h"

/**
 * printf_int - prints integater when called by printf
 *
 * @ap: Argument type int
 *
 * Return: Printed integers.
 */

int printf_int(va_list ap)
{
	int in = va_arg(ap, int);
	int n, i, expo, end, integers;
	end = in % 10;
	expo = 1;
	i = 1;

	in = in / 10;
	n = in;

	while (end < 0)
	{
		_putchar('-');
		n = -n;
		end = -end;
		i++;
	}
	while (n > 0)
	{
		int d = n / 10;
		
		while (d != 0)
		{
			expo = expo * 10;
			n = d;
		}

		n = in;

		while (expo > 0)
		{
			integers = n / expo;
			_putchar(integers + '0');
			n = n - (integers * expo);
			expo = expo / 10;
			i++;
		}
	}
	_putchar(end + '0');

	return (i);
}

/**
 * printf_dec - Prints Decimal integers when called by printf.
 *
 * @ap: Argument value of type decimal
 *
 * Return: Decimal Numbers.
 */

int printf_dec(va_list ap)
{
	int in, n, i, expo, integers, end;

	in = va_arg(ap, int);
	i = 1;
	expo = 1;
	end = in % 10;

	in = in / 10;
	n = in;

	while (n > 0)
	{
		int d = n /10;

		if (d != 0)
		{
			expo = expo * 10;
			n = n / 10;
		}
		if (expo > 0)
		{
			n = in;
			integers = n / expo;

			_putchar(integers + '0');
			n = n - (integers * expo);
			expo = expo / 10;

			i++;
		}
	}
	_putchar(end + '0');

	return (i);
}
