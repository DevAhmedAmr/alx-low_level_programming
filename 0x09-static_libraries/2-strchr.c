#include <stddef.h>
/**
 * _strchr - function that return a pointer to wanted charachter in a string
 * @s: the string variable that wanted to be searched in
 * @c: the variable that want to check for
 * Return: pointer to the character if found or null if it isn't
 */
char *_strchr(char *s, char c)
{
	int len = 0;

	/*calculate the len*/
	while (s[len] != '\0')
		len++;

	while (*s != '\0')
	{
		if (*(s) == c)
			return (s);
		s++;
	}

	/*check if the 'c' is the null terminator */
	if (*(s) == c)
		return (s);

	return (NULL);
}
