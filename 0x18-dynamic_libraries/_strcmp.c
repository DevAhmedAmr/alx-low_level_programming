#include "main.h"
/**
 * _strcmp - function compare strings lenth
 * @s1: string1
 * @s2: string1
 *
 * Return: If s1 is less than s2, the function returns a negative integer.
 * If s1 is greater than s2, the function returns a positive integer.
 * If s1 is equal to s2, the function returns zero.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)

		return (*s1 - *s2);
	else
		return (0);
}
