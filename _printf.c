<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
=======
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
>>>>>>> f6031936b1713f90c6e2c8611ada66e0716c344a
}
