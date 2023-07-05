#include <unistd.h>
/**
 * _puts_recursion - a function that takes an string and print if without loops
 * paramter:
 * @s: type string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	write(1, s, 1);

	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
	else
		write(1, "\n", 1);
}

