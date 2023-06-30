#include"main.h"
/**
 * print_number - function that prints number from scratch
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + 48);
}
