#include <stdio.h>
int main(void)
{
	unsigned long firstNum = 1;

	unsigned long  secondNum = 2;

	int i;

	printf("%lu, %lu, ", firstNum, secondNum);
	for ( i = 0; i < 50; i++)
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
	return (0);
}
