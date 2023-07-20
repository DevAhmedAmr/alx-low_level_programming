#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;

	if (n == 0)
		return 0;

	va_start(args, n);

	for (size_t i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return sum;
}
