#include "main.h"
Specifier arr[] = {
	{"%s", printf_str},
	{"%c", printf_char},
	{"%%", printf_percent},
	{"%d", printf_dec},
	{"%i", printf_int},
};

/**
 * _printf - Custom printf function.
 *
 * @format: String specifier.
 *
 * Return: The specifier to stdout.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, k, ln = 0;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		k = 4;

		while (k >= 0)
		{
			if (format[i] == arr[k].type[0] && format[i + 1] == arr[k].type[1])
			{
				ln += arr[k].f(ap);
				i = i + 2;
				break;
			}
			k--;
		}
		if (k < 0)
		{
			_putchar(format[i]);
			ln++;
			i++;
		}
	}
	va_end(ap);
	return (ln);
}
