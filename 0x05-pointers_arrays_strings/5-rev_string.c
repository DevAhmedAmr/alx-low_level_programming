#include"main.h"
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
