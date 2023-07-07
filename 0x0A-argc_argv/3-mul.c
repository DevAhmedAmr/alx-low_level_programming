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
 * Return: void
 */
void stringToInt(int *num, char *str)
{
	int i = 0;

	for (; i < _strlen(str); i++)
	{
		*num *= 10;
		*num += (((int)str[i]) - 48);
	}
}

/**
 * main - Entry point to an app that multi the command arguments
 *
 * paramters:
 * @argc: arguments value count
 * @argv: arguments value
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int result, num1 = 0, num2 = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	stringToInt(&num1, argv[1]);
	stringToInt(&num2, argv[2]);
	result = num1 * num2;
	printf("%i\n", result);
	return (0);
}

