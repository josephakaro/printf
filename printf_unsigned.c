#include "main.h"

/**
 * printf_unsigned - Prints an unsigned integer when called by _printf.
 *
 * @ap: Argument list (va_list).
 *
 * Return: Number of characters printed.
 */
int printf_unsigned(va_list ap)
{
    unsigned int n = va_arg(ap, unsigned int);
    int count = 0;
    int digit;

    do {
        digit = n % 10;
        _putchar(digit + '0');
        count++;
        n = n / 10;
    } while (n > 0);

    return (count);
}
