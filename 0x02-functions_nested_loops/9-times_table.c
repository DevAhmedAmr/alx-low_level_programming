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
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int result = i * j;

			if (j == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result <= 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
