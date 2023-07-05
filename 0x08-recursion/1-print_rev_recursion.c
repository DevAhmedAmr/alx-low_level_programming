#include"main.h"
/**
 * _print_rev_recursion - prints strings in reverse using recurive
 *
 * parameters:
 * @s: parameter type string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
