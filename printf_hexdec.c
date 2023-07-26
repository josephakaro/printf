#include "main.h"

/**
 * printf_hexdec - prints hexadecimal when called by printf
 *
 * @num: Argument to call
 *
 * Return: the passed argument
 */

int printf_hexdec(va_list v)
{
	int i, count = 0;
	char digit[8];

	unsigned int num = va_arg(v, unsigned int);
	unsigned int temp = num;

	for (i = 0; num; i++)
	{
		digit[i] = temp % 16;
		temp /= 16;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (digit[i] > 9)
		{
			digit[i] += 39;
		}
		_putchar(digit[i] + '\0');
	}

	return (count);
}
