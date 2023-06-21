#include <stdio.h>
void main(void)
{
	long long int firstNum = 0;

	long long int secondNum = 1;

	printf("%lld, %lld,  ", firstNum, secondNum);
	for (size_t i = 0; i < 50; i++)
	{
		long long int nextNumber = firstNum + secondNum;

		firstNum = secondNum;

		secondNum = nextNumber;

		printf("%lld  ", secondNum);
		if (i != 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
