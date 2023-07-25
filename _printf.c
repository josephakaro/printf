#include "main.h"

FormatSpecifier arr[] = 
{
	{"%s", printf_string},
	{"%c", printf_char},
	{"%%", printf_cent},
	{"%d", printf_int}
};

/**
 * _printf - custom printf function.
 *
 * @format: string specifier.
 *
 * Return: The specifier to stdout.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j,ln = 0;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while(format[i] != '\0')
	{
		j = 13;
		
		while (arr > 0)
		{
			if(format[i] == arr[j].place[0] && format[i + 1] == arr[j].place[1])
			{
				ln += arr[j].f(ap);
				i = i + 2;
				break;
			}
			j--;
		}
		if (j < 0)
		{
			_putchar(format[i]);
			ln++;
			i++;
		}
	}
	va_end(ap);
	return (ln);
}
