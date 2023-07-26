#include "main.h"

/**
 * printf_aux_h - search for the aux hex
 *
 * @num: unsigned long int
 *
 * Return: passed argument num.
 */

int printf_aux_h(unsigned long int num)
{
	int i, count = 0;
	char digit[8];

	for (i = 0; num; i++)
	{
		digit[i] = num % 16;
		num >>= 4;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (digit[i] > 9)
		{
			digit[i] += 39;
		}
		_putchar(digit[i] + '0');
	}

	return (count);
}
