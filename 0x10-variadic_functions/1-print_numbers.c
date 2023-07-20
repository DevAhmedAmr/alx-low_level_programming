#include "variadic_functions.h"
#include <string.h>

/**
 * print_number - function that print number
 * without using stdio lib
 *
 * @n: type int
 *
 * Return: number
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + 48);
}
/**
 * print_numbers - function that print a given numbers
 *
 * parameters:
 * @separator: separate the numbers with a separator
 * @n: number of number to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	int num;

	unsigned int j;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		unsigned int i;

		num = va_arg(args, int);

		print_number(num);

		if (j < n - 1 && separator != NULL)
		{
			for (i = 0; i < strlen(separator);i++)
			_putchar(separator[i]);
		}
	}
	_putchar('\n');

	va_end(args);
}

