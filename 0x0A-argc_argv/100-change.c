#include<stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for an app that prints the minimum number of coins
 * to make change for an amount of money and it print Error if input < 0
 *
 * parameters:
 * @argc: number of args values
 * @argv: array of strings that present the arrguments
 *
 * Return: 0 if seccsess , 1 if argc < 2 argv
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int arg = atoi(argv[1]);

		unsigned int list[5] = {25, 10, 5, 2, 1};

		unsigned int total = 0, i = 0, NumberOfCoins = 0, tankArg = arg;

		if (arg < 0)
		{
			printf("0\n");
			return (0);
		}

		while (total != tankArg)
		{
			if (total + list[i] <= tankArg)
			{
				NumberOfCoins++;
				/*printf("%i\n", list[i]);*/
				total += list[i];
				i = (0);
				continue;
			}
			i++;
			if (i > 4)
			i = 0;
		}
		printf("%i\n", NumberOfCoins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

