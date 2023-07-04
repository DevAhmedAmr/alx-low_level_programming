#include<stddef.h>
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
    for (int i = 0; i < strlen(haystack); i++)
    {
        // hello world
        //  world
        isMatch = 1;
        for (int j = 0; j < strlen(needle); j++)
        {
            if (needle[j] != haystack[i + j])
            {

                isMatch = 0;
                break;
            }
        }

        if (isMatch == 1)
        {
            matchIndex = i; // Store the starting index of the match

            break;
        }
    }
    if (matchIndex != -1)
    {

        return &haystack[matchIndex]; // Return a pointer to the matching substring
    }
    return (NULL);
}
