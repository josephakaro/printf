#include "main.h"

/**
 * printf_octdec - prints octadecimal when called by _printf
 *
 * @v: Arugment types
 *
 * Return: the count
 */

int printf_octdec(va_list v)
{
	int i, count = 0;
	unsigned int num = va_arg(v, unsigned int);

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar((num >> (i * 3)) & (7 + '0'));
	}

	return (count);
}
