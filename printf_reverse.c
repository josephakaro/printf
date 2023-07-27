#include "main.h"

/**
 * printf_reverse - Prints string in reverse by _printf
 *
 * @ap: Argument.
 *
 * Return: string in reverse
 */

int printf_reverse(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i, ln;

	if (str == NULL)
	{
		str = ("null");
	}

	ln = strlen(str);

	for ( i = ln + 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (ln);
}
