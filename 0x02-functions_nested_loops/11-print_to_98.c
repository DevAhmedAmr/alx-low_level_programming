#include<stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: int value
 *
 * Return: void
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
