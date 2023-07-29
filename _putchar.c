#include "main.h"

/**
 * _putchar - prints character
 *
 * @c: Characters to printed.
 *
 * Return: Always 1 (success), on error -1 is returned.
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
