#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints _putchar, followed by a new line.
 *
 * Return: 0 succsess , else failed
 */

int main(void)
{
	char string[] = "_putchar";
	long int i = 0;

	for (; i < sizeof(string); i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}

