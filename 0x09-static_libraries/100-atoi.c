#include"main.h"
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
 * _atoi - function that parse from string to int
 * @s: paramter type string
 *
 * Return: parsed string to int
 */


int _atoi(char *s)
{
	int operator = 1;

	unsigned int num = 0;

	int i;

	int ascii_code;

	int value;

	for (i = 0; i < _strlen(s); i++)
	{
		ascii_code = (int)s[i];

		if (ascii_code == 45)

			operator *= -1;
		else if (ascii_code == 43)

			operator *= 1;
		if ((num > 0 && ascii_code < 47) || (num > 0 && ascii_code > 58))
			break;
		else if ((ascii_code < 47) || ascii_code > 58)
			continue;
		if (ascii_code > 47 && ascii_code < 58)
		{
			value = ascii_code - '0';
			num *= 10;
			num += value;
		}
	}
	return (num *= operator);
}
