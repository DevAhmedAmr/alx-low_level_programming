#include "main.h"
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
 * print_rev - a function that returns the length of a string.
 *
 * @s: type str
 *
 * Return: length of a string
 */

void print_rev(char *s)
{
	int i;

	int temp;

	int len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		 temp = s[i];
		 s[i] = s[len - 1 - i];
		 s[len - 1 - i] = temp;
	}
}
