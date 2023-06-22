#include"main.h"
/**
 * print_square - function that prints  square
 *
 * Description: function that prints  square
 *
 * Return: void
 *
 */
void print_square(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
