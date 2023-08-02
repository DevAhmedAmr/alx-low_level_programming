#include <stdlib.h>
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
 * argstostr - function that collect al arguments to 1 variable type str
 *
 * parameter:
 * @ac: number of paramters
 * @av: arr of the parameters
 *
 * Return:a pointer to the parameters
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int j, i, len, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	i = 0;
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j <= _strlen(av[i]); j++)
		{
			if (av[i][j] == '\0')
			{
				str[k] = '\n';
				k++;
				continue;
			}

			str[k] = av[i][j];
			k++;
		}
	}
	str[len] = '\0';
	return (str);
}

