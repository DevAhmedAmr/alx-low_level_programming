#include <stddef.h>
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
	size_t i;

	for (i = 0; i < sizeof(string) - 1; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}

