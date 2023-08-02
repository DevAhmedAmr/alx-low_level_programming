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
 * rev_string - a function that returns the length of a string.
 *
 * @s: type str
 *
 * Return: length of a string
 */

void rev_string(char *s)
{
	int i = 0;

	int temp;

	int len = _strlen(s);

	for (; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
