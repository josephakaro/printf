#include "main.h"

/**
 * printf_string - Prints a string when called by _printf.
 *
 * @v: Argument type (va_list).
 *
 * Return: String length.
 */
int printf_string(va_list v)
{
<<<<<<< HEAD
    char *str = va_arg(v, char *);
    int ln = str ? strlen(str) : 8;

    int i;
=======
	char *str = va_arg(v, char *);
	int ln = str ? strlen(str) : 6;
>>>>>>> 1e1ba78e95e734d5c9421aa04a614f1bd428f1da

    i = 0;

    while (i < ln)
    {
        _putchar(str[i]);
        i++;
    }

    return (ln);
}
