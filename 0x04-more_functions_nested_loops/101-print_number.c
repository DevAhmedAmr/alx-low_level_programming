#include"main.h"
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
	unsigned int number1 = n;

	if (n < 0)
	{
		_putchar('-');
		number1 = -number1;
	}
	if (number1 / 10 > 0)
	{
		print_number(number1 / 10);
	}
	_putchar((number1 % 10) + 48);
}
