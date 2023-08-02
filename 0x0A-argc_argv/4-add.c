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
/**
 * stringToInt - function that convert string to int
 *
 * paramters:
 * @num: the buffer
 * @str: the number in the string form
 *
 * Return: 0 if succses , 1 if the string contains a symbol or character
 */

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
			return (1);
		}
		*num += (((int)str[i]) - 48);
	}

	if (isNegative == 1)
		*num *= -1;
	return (0);
}
/**
 * main - Entry point for app that sum all command line arguments
 *
 * parameters:
 * @argc: number of the command line args
 * @argv: command line args value
 *
 * Return: 0 if succsess
 */
int main(int argc, char *argv[])
{
	int total = 0, num, i;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = 0;

		if (stringToInt(&num, argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}

		total += num;
	}

	printf("%i\n", total);
	return (0);
}

