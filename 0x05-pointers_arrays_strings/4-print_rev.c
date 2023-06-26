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
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * print_rev - function that print
 *
 * @s: input of type char
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s)-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
