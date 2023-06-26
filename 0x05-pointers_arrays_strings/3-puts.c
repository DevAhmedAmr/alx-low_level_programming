#include"main.h"
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
