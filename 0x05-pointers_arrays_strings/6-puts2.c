#include"main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @str: type string
 *
 *
 * return: void
 */

void puts2(char *str)
{
	int print = 1;

	int i;

	for(i = 0; i < _strlen(str); i++)
	{
		if (print == 1)
		{
		_putchar(str[i]);
		print = 0;
		}

		else
			print = 1;
	}
}
