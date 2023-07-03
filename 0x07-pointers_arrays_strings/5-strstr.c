#include<stddef.h>
char *_strstr(char *haystack, char *needle)
{
	/* Check if the needle == null terminator, if true return haystack */
	if (*needle == '\0')
		return (char *)haystack;
	/* Iterate over each character in the haystack  */
	while (*haystack != '\0')
	{
		char *h = haystack; /* Pointer to current position in haystack */
		char *n = needle;   /* Pointer to current position in needle */

		/* Check if the characters match until the end of the needle or a mismatch is found */
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		/* If the end of the needle is reached, a match is found, return pointer to haystack */
		if (*n == '\0')
			return (char *)haystack;
		haystack++; /* Move to the next char in haystack */
	}
	/* If no match return NULL */
	return NULL;
}
