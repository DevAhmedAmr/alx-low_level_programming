#include "variadic_functions.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * then return it.
 *
 * @x: parm of The base value that wanted to be calcualted.
 * @y:parm of The exponent value that wanted to be raised.
 *
 * Return: The value of x raised to the power of y,
 * or -1 if y is negative.
 */
int _pow(int base, int exponent) {
    int result = 1 ,i;
    for(i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	long int num, numCpy, numlen = 0, i;
	unsigned int j;
	double power;
	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		num = va_arg(args, int);
		numCpy = num;
		if (num < 0)
		{
			printf("-");
			num = num * -1;
			numCpy = num;
		}

		while (numCpy > 9)
		{
			numCpy /= 10;
			numlen++;
		}

		power = _pow(10, numlen);

		for (i = 0; i <= numlen; i++)
		{
			printf("%ld",num / (int)power % 10);
			power /= 10;
		}
		numlen = 0;

		if (separator != NULL && separator != 0)
		{
			if (j != n - 1)
			{
				printf("%s", separator);
			}
			else
			{
				printf("\n");
			}
		}
	}
	va_end(args);
}
