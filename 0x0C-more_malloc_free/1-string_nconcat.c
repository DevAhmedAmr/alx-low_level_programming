#include<stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int s1Len = 0, i, j, k = 0;
    char *newSentance;

    /*get the len of s1*/
    while (s1[s1Len] != '\0')
        s1Len++;

    /*allocated the memory*/
    newSentance = malloc((s1Len + n + 1) * sizeof(char));

    /*add s1*/

    for (i = 0; i < s1Len; i++)
        newSentance[i] = s1[i];

    /*append s2*/
    for (j = s1Len; k < n; j++)
    {
        newSentance[j] = s2[k];
        k++;
    }

    newSentance[s1Len + n] = '\0';

    return newSentance;

}

