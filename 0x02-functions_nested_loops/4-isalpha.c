#include"main.h"
/**
 * _isalpha - function that checks if the input of
 * type char is a char
 *
 * @c: is a paramter of type char
 *
 * Return: 1 if c is a lowercase else reutrn 0
 *
 */
int int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		return (1);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
