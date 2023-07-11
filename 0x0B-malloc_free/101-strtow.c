#include<stdlib.h>
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
/**
 * _strncpy - function that copies a string to another empty string
 * @dest: string paramter that will the copied text save in
 * @src: text string to be copied
 * @n: number of chars to be copied from src
 *
 * Return: dest var
 */
char *_strncpy(char *dest, char *src)
{
   int i , len = _strlen(src);

    for (i = 0; (i < len) && (src[i] != '\0'); i++)
    {
        dest[i] = src[i];
    }
   
    dest[i] = '\0';

    return dest;
}
int wordcounter(char *str)
{
    char *separators = " \t\n,";
    int i = 0, count = 0, len = _strlen(str);
    int oldI;
    while (i < len)
    {
        /*leaping threw separators and skip them */
        while (i < len)
        {

            /*if current str[i] (char) is not a separators break; else increment 'i' */
            if (_strchr(separators, str[i]) == NULL)
            {

                break;
            }
            i++;
        }
        oldI = i;
        while (i < len)
        {
            /*the current index str[i] is  equal to separator break else increment the counter*/

            if (_strchr(separators, str[i]) != NULL)
            {
                break;
            }
            i++;
        }
        if (i > oldI)

            count++;
    }

    return count;
}
char **strtow(char *str)
{
	int len = _strlen(str), i, j, k = 0, isEmptyString = 1;
	int wordsCount = wordcounter(str);
	char **strAyy = (char **)malloc((wordsCount + 1) * sizeof(char *));

	if (str == NULL || _strlen(str) == 0)
		return NULL;

	for (i = 0; i < len; i++)
	{
		char buffer[16350];

		if (str[i] == ' ')
		{
			if (isEmptyString == 1 && i == len - 1)
				return NULL;
			continue;
		}
		isEmptyString = 0;

		j = 0;

		while (str[i] != ' ' && str[i] != '\0')
		{
			buffer[j] = str[i];
			i++;
			j++;
		}

		buffer[j] = '\0';

		strAyy[k] = (char *)malloc((j + 1) * sizeof(char));
		_strncpy(strAyy[k], buffer);

		k++;
	}
	strAyy[k] = NULL;
	return strAyy;
}

