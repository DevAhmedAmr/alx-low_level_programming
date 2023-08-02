#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 *
 * parameters:
 * @s1: first string to be concatenates
 * @s2: second string to be concatenates
 * @n: number of char in str 2 to be concatenates
 *
 * Return: a pointer to a variable that holds s1 + s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Len = 0, i, j, k = 0;
	char *newSentence;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get the length of s1 */
	while (s1[s1Len] != '\0')
		s1Len++;

	/* Allocate the memory */
	newSentence = malloc((s1Len + n + 1) * sizeof(char));

	if (newSentence == NULL)
		return (NULL);

	/* Add s1 */
	for (i = 0; i < s1Len; i++)
		newSentence[i] = s1[i];

	/* Append s2 */
	for (j = s1Len; k < n; j++)
	{
		newSentence[j] = s2[k];
		k++;
	}

	newSentence[s1Len + n] = '\0';

	return (newSentence);
}

