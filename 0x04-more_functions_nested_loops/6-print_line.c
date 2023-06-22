#include"main.h"
/**
 * print_line - that draws a straight line in the terminal.
 * @n: paramter type int
 *
 * Description: function
 *
 * Return: void
 *
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i > 0)
			_putchar('_');
	}
	_putchar('\n');
}
