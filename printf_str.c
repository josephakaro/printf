#include "main.h"

/**
 * _length - Returns the lenght of a string.
 *
 * @s: Type char pointer
 *
 * Return: characters.
 */

int _length(char *str)
{
  int l;

  for (l = 0; str[l] != '\0'; l++)
    ;
  return (l);
}

/**
 * _str - Strlen function but applied for constant char pointer str
 *
 * @s: Type char pointer
 *
 * Return: Characters
 */

int _str(const char *str)
{
  int l;

  for (l = 0; str[l] != '\0'; l++)
    ;
  return (l);
}
