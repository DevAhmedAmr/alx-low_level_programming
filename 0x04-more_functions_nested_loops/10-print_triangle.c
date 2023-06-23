#include"main.h"
/**
 * print_triangle - Write a function that prints a triangle,
 *  followed by a new line.
 * @size: type int n time
 *
 * return: 0
 */
void print_triangle(int size)
{
	int i;

	int j;

	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;

		for (; i <= size; i++)
		{
			j = i;
			for (; j < size; j++)
			{
				_putchar(' ');
			}
			k = 1;
			for (; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
