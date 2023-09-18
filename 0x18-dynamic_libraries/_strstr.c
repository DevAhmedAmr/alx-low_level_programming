#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates the first occurrence of a substring in another string
 *
 *
 * parameters:
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the matching substring, or NULL if no
 * match is found
 */

char *_strstr(char *haystack, char *needle)
{
	int isMatch = 0; /* Initialize a flag to indicate if a match is found */
	int matchIndex = -1, i, j;

	/* Loop through each character in 'haystack' */
	for (i = 0; i < _strlen(haystack); i++)
	{
		isMatch = 1; /* Assume a match is found until proven otherwise */
		/* Loop through each character in 'needle' */

		for (j = 0; j < _strlen(needle); j++)
		{

			if (needle[j] != haystack[i + j])
			{
				/* If a mismatch is found, set the flag to false and break the loop */
				isMatch = 0;

				break;
			}
		}
		/* If a match is found, store i in match index and break the loop */
		if (isMatch == 1)
		{
			matchIndex = i;
			break;
		}
	}
	/* If a match is found, return a pointer to the matching substring;*/
	/* otherwise, return NULL */
	if (matchIndex != -1)
		/* same as : (haystack + matchIndex) */
		return (&haystack[matchIndex]);
	return (NULL);
}
