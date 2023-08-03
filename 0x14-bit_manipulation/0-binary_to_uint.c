#include "main.h"
#include <string.h>
/**
 * _strlen -  a function that returns the length of a string.
 *
 * @s: type str
 *
 * Return: length of a string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @parm
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: binary number converted to unsigned int
 */
unsigned int binary_to_uint(const char *b)
{ /* 5*2^(0) */
	unsigned int len;
	unsigned int num = 0;
	int shift = 0, i;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		int ascii;

		ascii = (((int)b[i]));
		if (ascii < 48 || ascii > 57)
			return (0);

		num += (ascii - 48) << shift;
		shift++;
	}

	return (num);
}
