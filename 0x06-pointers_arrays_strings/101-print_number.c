#include"main.h"
/**
 * print_number - function that prints number from scratch
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	putchar(n % 10 + 48);
}
