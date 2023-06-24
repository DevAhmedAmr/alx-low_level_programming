#include<stdio.h>
/**
 * main - Entry point
 *
 *
 * description: function print the largest prime factor
 *
 * Return: 0 if success
 *
 */

int main(void)
{
	long int number = 612852475143, i;

	for (i = 2; i < number; i++)
	{
		while (number % i == 0)
			number /= i;
	}

	printf("%ld\n", number);

	return (0);
}

