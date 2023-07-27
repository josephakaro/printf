#include "main.h"

FormatSpecifier arr[] =
{
<<<<<<< HEAD
    {"%s", printf_string},
    {"%c", printf_char},
    {"%%", printf_cent},
    {"%d", printf_int}
=======
	{"%s", printf_string},
	{"%c", printf_char},
	{"%%", printf_cent},
	{"%i", printf_int},
	{"%r", printf_reverse},
	{"%R", printf_rt13},
	{"%b", printf_binary},
	{"%u", printf_unsigned},
	{"%o", printf_octdec},
	{"%x", printf_hexdec},
	{"%X", printf_HEXDEC},
	{"%S", printf_Xstring},
	{"%p", printf_pointer}
>>>>>>> 1e1ba78e95e734d5c9421aa04a614f1bd428f1da
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
    int i = 0, j, ln = 0;

    va_start(ap, format);

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[i] != '\0')
    {
        j = 4;

        while (j >= 0)
        {
            if (format[i] == arr[j].place[0] && format[i + 1] == arr[j].place[1])
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

