#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the sum of even number,
 * in fabini scq starting with 1 and 2
 *
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	unsigned int firstNumber = 0;

	unsigned int secondNumber = 1;

	unsigned int totalSum = 0;

	int i;

	for (i = 2; i < 50; i++)
	{
		unsigned int num3 = firstNumber + secondNumber;

		firstNumber = secondNumber;
		secondNumber = num3;
		if (num3 < 4000000 && num3 % 2 == 0)
		{
			totalSum += num3;
		}
	}
	printf("%u\n", totalSum);
	return (0);
}
