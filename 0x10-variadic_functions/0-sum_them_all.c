#include "variadic_functions.h"
/**
 * sum_them_all - function that sum all the parameters
 *
 * parameters:
 * @n: number of paramters
 *
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}
