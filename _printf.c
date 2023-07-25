#include "main.h"

/**
 * _printf - Prints argument to the stdout
 *
 * @format: Identifiers.
 *
 * Return: Prints out the passed argument.
 */

int _printf(const char * format, ...)
{
	int count = 0;
	va_list args;
 	 int i = 0;

  va_start(args, format);
  while (format[i] != '\0') {
    if (format[i] == '%') {
      switch (format[i + 1]) {
        case 'c': {
          char c = va_arg(args, int);
          count += printf("%c", c);
          i++;
          break;
        }
        case 's': {
          char *str = va_arg(args, char *);
          count += printf("%s", str);
          i++;
          break;
        }
        case '%': {
          count += printf("%%");
          i++;
          break;
        }
        case 'd':
        case 'i': {
          int in = va_arg(args, int);
          count += printf("%d", in);
          i++;
          break;
        }
        default: {
          break;
        }
      }
    } else {
      count += printf("%c", format[i]);
    }
    i++;
  }

  va_end(args);
  return (count);
}
