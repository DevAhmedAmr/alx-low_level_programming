#include <stdio.h>
/**
 * _strchr - function
 * @s: variable
 * @c: variable
 * Return: ptr
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;

	if (*s == '\0')
	return NULL;

    return s;
}
