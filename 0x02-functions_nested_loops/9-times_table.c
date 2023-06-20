#include"main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 *
 * Return: void
 *
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int x = i * j;

			if (x <= 9)
			{
				_putchar(x + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
