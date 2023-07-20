#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i, j;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		for (j = 0; j < strlen(str); j++)
			_putchar(str[j]);

		/*break in order not to print separator if 'i' is the last element */
		if (i >= n - 1)
			break;

		/*print separator */
		for (j = 0; j < strlen(separator); j++)
			_putchar(separator[j]);
	}
	_putchar('\n');
}
