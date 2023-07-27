#include "main.h"

/**
 * printf_rt13 - prints rot13 when called by _printf
 *
 * @ap: argument type
 *
 * Return the padded arguments
 */

int printf_rt13(va_list ap)
{
	int i, count = 0;
	char *str = va_arg(ap, char *);
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if(str == NULL)
	{
		str = "null";
	}

	for (i = 0; str[i]; i++)
	{
		char c = str[i];
		int id = strchr(a, c) - a + 1;
		
		if(id != -1)
		{
			_putchar(b[id]);
			count++;
		}
		else
		{
			_putchar (c);
			count++;
		}
	}

	return (count);
}
