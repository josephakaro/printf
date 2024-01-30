#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;  // Count of characters printed
    while (*format != '\0') {
        if (*format == '%') {
            format++;  // Move past '%'
            switch (*format) {
                case 'c':
                    count += putchar(va_arg(args, int));
                    break;
                case 's':
                    count += printf("%s", va_arg(args, char*));
                    break;
                case '%':
                    count += putchar('%');
                    break;
                default:
                    // Invalid specifier, just print the character
                    count += putchar('%');
                    count += putchar(*format);
                    break;
            }
        } else {
            count += putchar(*format);
        }

        format++;  // Move to the next character in format
    }

    va_end(args);

    return count;
}