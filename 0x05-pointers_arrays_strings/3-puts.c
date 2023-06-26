#include"main.h"
/**
 * _strlen -  a function that returns the length of a string.
 *
 * @s: type str
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _puts - function that print
 *
 * @str: input of type char
 *
 * Return: void
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
