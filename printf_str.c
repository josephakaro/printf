#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 *
 * @s: Type char pointer
 *
 * Return: characters.
 */

int _strlen(char *str)
{
  int l;

  for (l = 0; s[l] != '\0'; l++)
    ;
  return (l);
}

/**
 * _strlenc - Strlen function but applied for constant char pointer str
 *
 * @s: Type char pointer
 *
 * Return: Characters
 */

int _strlenc(const char *str)
{
  int l;

  for (l = 0; str[l] != '\0'; l++)
    ;
  return (l);
}
