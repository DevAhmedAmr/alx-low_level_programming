#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
int main(void)
{
	int i;
	int arr[] = {584, 69874, -5544, 941554, -953665, 6525};
	for (i = 0; i < 5; i++)
	{
		print_number(arr[i]);
		_putchar(',');
		_putchar(' ');
	}

	return (0);
}
