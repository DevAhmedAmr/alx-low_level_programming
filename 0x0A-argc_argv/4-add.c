#include"main.h"
#include<stdio.h>
/**
 * _strlen -  a function that returns the length of a string.
 *
 * @s: type str
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

int stringToInt(int *num, char *str)
{
	int isNegative = 0;
	int i = 0;

	if (*str == '-')
	{
		*str = '0';
		isNegative = 1;
	}

	for (; i < _strlen(str); i++)
	{
		*num *= 10;
		if ((int)str[i] < 48 || (int)str[i] > 57)
		{
			return 1;
		}
		*num += (((int)str[i]) - 48);
	}

	if (isNegative == 1)
		*num *= -1;
	return 0;
}

int main(int argc, char *argv[])
{
	int total = 0, num, i;

	if (argc < 3)
	{
		printf("0\n");
		return 0;
	}

	for (i = 1; i < argc; i++)
	{
		num = 0;

		if (stringToInt(&num, argv[i]) == 1)
		{
			printf("Error\n");
			return 1;
		}

		total += num;
	}

	printf("%i\n", total);
	return 0;
}

