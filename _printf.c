#include "main.h"

/**
 * _printf - Holds selected functions and prints it to stdout.
 *
 * @format: identifier.
 *
 * Return:  Lenght of the string.
*/

int _printf(const char * const format, ...)
{
    int i = 0;
    int len = 0;
    va_list args;

    va_start(args, format);

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    int (*print_f[])(va_list) =
    {
        printf_string,
        printf_char,
        printf_37,
        printf_int,
        printf_dec,
        printf_srev,
        printf_rot13,
        printf_bin,
        printf_unsigned,
        printf_oct,
        printf_hex,
        printf_HEX,
        printf_exclusive_string,
        printf_pointer
    };

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            int type = format[i + 1];

            switch(type)
            {
            case 's':
                len += print_f[0](args);
                break;
            case 'c':
                len += print_f[1](args);
                break;
            case '%':
                len += print_f[2](args);
                break;
            case 'i':
                len += print_f[3](args);
                break;
            case 'd':
                len += print_f[4](args);
                break;
            case 'r':
                len += print_f[5](args);
                break;
            case 'R':
                len += print_f[6](args);
                break;
            case 'b':
                len += print_f[7](args);
                break;
            case 'u':
                len += print_f[8](args);
                break;
            case 'o':
                len += print_f[9](args);
                break;
            case 'x':
                len += print_f[10](args);
                break;
            case 'X':
                len += print_f[11](args);
                break;
            case 'S':
                len += print_f[12](args);
                break;
            case 'p':
                len += print_f[13](args);
                break;
            default:
                _putchar(format[i]);
                len++;
                i++;
                break;
            }
        }
        else
        {
            _putchar(format[i]);
            len++;
            i++;
        }
    }
    va_end(args);
    return (len);
}

