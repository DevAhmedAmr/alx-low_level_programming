#include <stddef.h>
/**
 * _strpbrk - Finds the first occurrence of any character from the
 * 'accept' string in the 's' string then return a ptr to it
 *
 * paramters:
 * @s: A pointer to the input string.
 * @accept: A pointer to the set of accepted characters.
 *
 * Return: A pointer to the first occurrence of a matching character in 's'
 * , or return null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int sLen = 0, acceptLen = 0, j, i;

	/* Get the length of the 's' variable */
	while (s[sLen] != '\0')
		sLen++;

	/* Get the length of the 'accept' variable */
	while (accept[acceptLen] != '\0')
		acceptLen++;

	for (i = 0; i < sLen; i++)
	{
		for (j = 0; j < acceptLen; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

