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
	for (size_t i = 0; i <= 9; i++)
	{
		for (size_t j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (result <= 9)
			{
				if (j > 1)
				{
					_putchar(' ');
				}

				_putchar(result + '0');

				if (j != 9)
					_putchar(',');
				if (j < 9)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
