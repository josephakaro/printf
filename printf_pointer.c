#include "main.h"

/**
 * printf_pointer - Prints an address when called by _printf
 *
 * @v: Address to call,
 *
 * Return: Address.
 */

int printf_pointer(va_list v)
{
	void *p = va_arg(v, void*);
	char *str = "(nil)";
	int i, ln;

	if (p == NULL)
	{
		ln = strlen(str);
	}
	else
	{
		long int a = (unsigned long int)p;

		ln = printf_aux_h(a) + 2;
	}

	for (i = 0; i < ln; i++)
	{
		_putchar(str[i]);
	}

	return (ln);
}
