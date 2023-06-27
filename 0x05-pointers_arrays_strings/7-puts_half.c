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
void puts_half(char *str)
{

    int i;

    for (i = _strlen(str) / 2; i < _strlen(str); i++)
    {

       _ putchar(str[i]);
    }
}
