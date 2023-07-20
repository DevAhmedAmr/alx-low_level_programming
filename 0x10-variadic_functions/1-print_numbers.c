#include "variadic_functions.h"

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + 48);
}
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	int num;

	unsigned int j;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		num = va_arg(args, int);

		print_number(num);

		if (j < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}

