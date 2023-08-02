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
int isMatch = 0;    /* Initialize a flag to indicate if a match is found */
int matchIndex = -1, i, j;

	/* Loop through each character in 'haystack' */
	for (i = 0; i < _strlen(haystack); i++)
	{
		isMatch = 1;        /* Assume a match is found until proven otherwise */
		/* Loop through each character in 'needle' */

		for (j = 0; j < _strlen(needle); j++)
		{
/* Compare the characters at the same index in  both strings */
/* 'j' index in 'haystack[j + i]' && needle[j] will only be incremented */
/* if the loop is not broken that means j will only be more than '0' */
/* if (needle[j] != haystack[j + i]) is false*/

/* !!we using j+i instead of just i bcs in the inner loop bcs i value wont!! */
/*be changed in inner loop it only get changed if break out of the inner loop*/

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
