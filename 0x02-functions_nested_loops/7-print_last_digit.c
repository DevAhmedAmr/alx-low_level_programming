#include"main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @i: int value
 *
 * Return: the value of the last digit
 *
 */
int print_last_digit(int i)
{
	int x;

	if (i > 0)
	{
	x = i % 10;

	_putchar(x + '0');
	return (i % 10);
	}
	else
	{
		x = -1 *(i % 10);

		_putchar(x + '0');
		return (x);

	}
}
