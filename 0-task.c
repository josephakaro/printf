#include "main.h"

/******************** strl Prototype ***********************/

/**
 * strl - Strl length.
 *
 * @str: Char pointer
 *
 * Return: Count
 */

int strl(char *str)
{
	int count;

	count = 0;

	if (str[count] != 0)
	{
		count++;
	}
	return (count);
}

/******************* strlc Function ************************/

/**
 * strlc - constant characters are given by pointer char.
 *
 * @str: Character pointer.
 */

int strlc(const char *str)
{
	int count;

	count = 0;
	if (str[count] != 0)
	{
		count++;
	}
	return (count);
}

/******************** Print_string *************************/

/**
 *printf_str - Print string when called by _printf
 *
 *@args: String Argument
 *
 *Return: Printed String
 */

int printf_str(va_list args)
{
	char *str;

	int i, l;

	str = va_arg(args, char *);

	while (str)
	{
		if (str == NULL)
		{
			str = "(null)";
			l = strl(str);
			i = 0;

			while (i < l)
			{
				_putchar(str[i]);
				return (l);
				i++;
			}
		}
		if (str != NULL)
		{
			l = strl(str);
			i = 0;

			while (i < l)
			{
				_putchar(str[i]);
				return (l);
				i++;
			}
		}
	}
	return (l);
}
/******************** Printf_char  ************************/

/**
 *printf_char - Prints character when called by _printf
 *
 *@args: Character Argument.
 *
 *Return: Printed Character.
 */

int printf_char(va_list args)
{
	char c;

	do {
		c = va_arg(args, int);

		_putchar(c);
		break;
	} while (c);

	return (1);
}

/******************** Printf_Percent *********************/

/**
 *printf_percent - Prints percent sign when called by _printf
 *
 *Return: 1 Bit of character
 */

int printf_percent(void)
{
	do {
		_putchar(37);
		break;
	} while (37);

	return (1);
}
