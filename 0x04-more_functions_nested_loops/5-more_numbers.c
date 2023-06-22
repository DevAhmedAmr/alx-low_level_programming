#include"main.h"
/**
 * more_numbers - function that prints 10 times
 * the numbers, from 0 to 14
 *
 * Description: function
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;
	int value = 0;

	for (j = 0; j < 10; j++)
	{
		for (; i <= 14; i++)
		{
			if (i == 10)
			{
				value = 1;
			}

			if (i > 9)
			{
				value = i % 10;

				_putchar(i / 10 + 48);
			}
			_putchar(value + 48);
			value++;
		}
		i = 0;
		value = 0;
		_putchar('\n');
	}
}
