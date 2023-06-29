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
 * _strlen - function compare strings lenth
 * @s1: string1 
 * @s2: string1
 *
 * Return: If s1 is less than s2, the function returns a negative integer.
 * If s1 is greater than s2, the function returns a positive integer.
 * If s1 is equal to s2, the function returns zero.
 */
int _strcmp(char *s1, char *s2)
{
	if (_strlen(s1) < _strlen(s2))
	{
		return -15;
	}
	else if (_strlen(s1) > _strlen(s2))
	{
		return 15;
	}

	return 0;
}
