#include<stddef.h>
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
 * _strstr - function that search for a string in another string
 *
 * parameters:
 * @haystack: string that will be searched in
 * @needle: string that will be searched for
 * Return: a pointer to needle if found
 * if not found return null
 */

char *_strstr(char *haystack, char *needle)
{
    int isMatch = 0;
    int matchIndex = -1;
    int i, j;
    for (i= 0; i < _strlen(haystack); i++)
    {
       
        isMatch = 1;
        for ( j = 0; j < _strlen(needle); j++)
        {
            if (needle[j] != haystack[i + j])
            {

                isMatch = 0;
                break;
            }
        }

        if (isMatch == 1)
        {
            matchIndex = i; /* Store the starting index of the match*/

            break;
        }
    }
    if (matchIndex != -1)
    {

        return &haystack[matchIndex]; /* Return a pointer to the matching substring*/
    }
    return (NULL);
}
