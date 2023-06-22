#include <stdio.h>
int main(void)
{
	unsigned long firstNum = 0;

	unsigned long  secondNum = 1;

	int i;

	printf("%lu, %lu,  ", firstNum, secondNum);
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
