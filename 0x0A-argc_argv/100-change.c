#include<stdio.h>
#include <stdlib.h>
/**
 * change - improved approach to greedy algorithm to an app that
 * prints the minimum number of coins to make change for an amount of money and
 * it print Error if input < 0
 *
 * Description: the algorisim is used with  "improved" greedy algorithm
 * so that it consumes less memory and faster
 *
 * parameters:
 * @argc: number of args values
 * @argv: array of strings that present the arrguments
 *
 * Return: 0 if seccsess , 1 if argc < 2 argv
 */
int change(int argc, char *argv[])
{
	int coin_values[5] = {25, 10, 5, 2, 1};

	int arg, i, coinsNumbr = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	arg = atoi(argv[1]);

	if (arg < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (arg >= coin_values[i])
		{
			coinsNumbr += arg / coin_values[i];
			arg = arg % coin_values[i];
			if (!arg % coin_values[i])
			{
				break;
			}
		}
	}

	printf("%i\n", coinsNumbr);

	return (0);
}

/**
 * main - Entry point for an app that prints the minimum number of coins
 * to make change for an amount of money and it print Error if input < 0
 *
 * Description: "we use greedy algorithm approach in this code"
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

