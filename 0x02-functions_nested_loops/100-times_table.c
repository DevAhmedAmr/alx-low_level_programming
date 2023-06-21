#include"main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @i: int value
 *
 * Return: the value of the last digit
 *
 */
void print_times_table(int n)
{
	if (n >= 15 && n>=0)
	{
		int i = 0;

		for (; i <= n; i++)
		{
			int j =0;

			_putchar(48);
			for (; j <=n; j++)
			{
				int result =i * j;

				_putchar(',');
				_putchar(' ');
				if (result <=9 || result <= 99)
					_putchar(' ');
				if (result >= 100)
				{
					_putchar((result /100) + '0');
					_putchar((result /10) + '0');
				} else if (result <= 99 && result >= 10)
					_putchar((result /10) +'0');
				_putchar((result %10) +48);

			}
			_putchar('\n');
		}
	}
}
