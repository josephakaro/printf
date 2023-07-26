#include "main.h"

/**
 * printf_string - Print string when called by _printf
 *
 * @v: Argument type
 *
 * Return: String length
 */

int printf_string(va_list v)
{
	char *str = va_arg(v, char *);
	int ln = str ? strlen(str) : 6;

	int i;

	i = 0;

	while (i < ln)
	{
		_putchar(str[i]);
		i++;
	}
	return (ln);
}
