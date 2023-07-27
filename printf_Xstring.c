#include "main.h"

/**
 * printf_Xstring - prints exclusive string called
 *
 * @v: Argument passed
 *
 * Return: the length of argument
 */

int printf_Xstring(va_list v)
{
	char *str = va_arg(v, char *);
	int i, ln, c;

	ln = 0;

	if (str == NULL)
	{
		str = "null";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (c < 32 || c > 127)
		{
			_putchar('\\');
			_putchar('x');
			ln += 2;

			if (c < 16)
			{
				_putchar('0');
				ln++;
			}
			ln += printf_aux_h(c);
		}
		else
		{
			_putchar(c);
			ln++;
		}
	}

	return (ln);
}
