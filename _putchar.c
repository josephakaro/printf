#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The charater to print
 *
 * Return: On success 1, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
