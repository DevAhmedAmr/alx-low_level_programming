#include<stdio.h>
/**
 * firstPrimeNumber - Finds the sammlest prime number
 * @n: takes an input
 *
 * description: function
 *
 * Return: smallest prime number
 *
 */


unsigned long long firstPrimeNumber(unsigned long long n)
{
	unsigned long long i;

	if (n > 1)
	{
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return (i);
			}
		}
	}
	return (n);
}


/**
 * largestPrimeNum - finds the largest prime number
 * @n: input n
 *
 * description: function
 *
 * Return: largest prime number
 *
 */

unsigned long long largestPrimeNum(unsigned long long n)
{
	while (1)
	{
		unsigned long long smallestPrimeNumber = firstPrimeNumber(n);

		if (smallestPrimeNumber < n)
		{
			n = n / smallestPrimeNumber;
		}
		else
		{
			return (n);
		}
	}
}

/**
 * main - Entry point
 *
 * description: function
 *
 * Return: 0
 */

int main(void)
{
	printf("%lld\n", largestPrimeNum(612852475143));
	return (0);
}
