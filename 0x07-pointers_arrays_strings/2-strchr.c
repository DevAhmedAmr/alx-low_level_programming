#include <stdio.h>
/**
 * _strchr - function
 * @s: variable
 * @c: variable
 * Return: ptr
 */
char *strchr(const char *str, int c) {
  while (*str != c && *str != '\0') {
    str++;
  }
  if (*str == c) {
    return (char *) str;
  } else {
    return NULL;
  }
}

