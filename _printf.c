#include "main.h"
/**
 * _printf - Prints argument to the stdout
 * @format: Identifiers.
 * Return: Prints out the passed argument.
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;
	int i = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					{
						count += printf("%c", va_arg(args, int));
						break;
					}
				case 's':
					{
						count += printf("%s", va_arg(args, char *));
						break;
					}
				case '%':
					{
						count += printf("\%");
						break;
					}
				case 'd':
				case 'i':
					{
						count += printf("%d", va_arg(args, int));
						break;
					}
				default:
					{
						break;
					}
			}
		}
		else
		{
			count += printf("%c", format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
