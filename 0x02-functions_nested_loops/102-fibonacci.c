#include <stdio.h>
void main(void)
{
	unsigned long firstNum = 0;

	unsigned long  secondNum = 1;

	printf("%lu, %lu,  ", firstNum, secondNum);
	for (size_t i = 0; i < 50; i++)
	{
		unsigned long nextNumber = firstNum + secondNum;

		firstNum = secondNum;

		secondNum = nextNumber;

		printf("%lu  ", secondNum);
		if (i != 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
