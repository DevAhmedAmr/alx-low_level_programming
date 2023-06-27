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

	 if (_strlen(str) % 2 != 0)
		  i = _strlen(str) / 2 + 1;
	 else 
		  i = _strlen(str) / 2;

    for (; i < _strlen(str); i++)
    {
	   

       _putchar(str[i]);
    }
    _putchar('\n');
}
