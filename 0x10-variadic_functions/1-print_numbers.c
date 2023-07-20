#include "variadic_functions.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * then return it.
 *
 * @x: parm of The base value that wanted to be calcualted.
 * @y:parm of The exponent value that wanted to be raised.
 *
 * Return: The value of x raised to the power of y,
 * or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	if (y > 0 && y != 1)
		return (x * _pow_recursion(x, y - 1));
	return (x);
}

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num, numCpy, numlen = 0, i;
	unsigned int j;
	double power;
	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		num = va_arg(args, int);
		numCpy = num;
		if (num < 0)
		{
			_putchar('-');
			num = num * -1;
			numCpy = num;
		}

		while (numCpy > 9)
		{
			numCpy /= 10;
			numlen++;
		}

		power = _pow_recursion(10, numlen);

		for (i = 0; i <= numlen; i++)
		{
			_putchar(num / (int)power % 10 + 48);
			power /= 10;
		}
		numlen = 0;

		if (separator != NULL)
		{
			if (j != n - 1)
			{
				printf("%s", separator);
			}
			else
			{
				printf("\n");
			}
		}
	}
}

