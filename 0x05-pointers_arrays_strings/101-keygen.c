#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - function that generate random password
 *
 * Return: 0 = success else failed
 */

int main(void)
{
	int i = 0;
	int randomNumber = 0;
	int totalSum = 0;
	char passwd[100];
	char allchars[63] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	srand(time(NULL));
	while (totalSum < (2650))/*2772 -122*/
	{
		randomNumber = rand() % 62;
		passwd[i] = allchars[randomNumber];
		totalSum += passwd[i];
		i++;
	}
	randomNumber = 2772 - totalSum;
	passwd[i] = randomNumber;
	passwd[++i] = '\0';
	printf("%s\n", passwd);
	return (0);
}
