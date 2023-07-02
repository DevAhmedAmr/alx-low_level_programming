#include<stdio.h>
/*impelementation of a calculator but its limited by unsigned long or int*/
/* since Long Long is not allowed in the alx 0x006 more pointer and array*/
/* task*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/*declare counter varables*/
	int len1 = 0, len2 = 0, integer1 = 0, integer2 = 0, i, j, resultLen = 0;

	unsigned int result, resultCpy;

	while (n1[len1] != '\0')

		len1++;

	while (n2[len2] != '\0')

		len2++;

	/*checks if either i or j is greater than size_r.*/

	for (i = 0; i < len1; i++)
	{
		integer1 *= 10;
		integer1 += n1[i] - 48;
	}
	for (j = 0; j < len2; j++)
	{
		integer2 *= 10;
		integer2 += n2[j] - 48;
	}
	result = integer1 + integer2;

	/*to prevent the original result to be modified*/
	resultCpy = result;

	/* calculate the length of the result that is in integer state*/
	while (resultCpy > 0)
	{
		resultCpy /= 10;
		resultLen++;
	}

	/* convert the result from integer to string then assign it to r*/
	for (i = 0; i < resultLen; i++)
	{
		int x = result % 10;

		r[resultLen - i - 1] = x + '0';
		result /= 10;
	}

	/* another way to convert from int to string */

	/* * for (i = resultLen; i >= 0; i--)*/
	/* {*/
	/* int x = result % 10;*/
	/* r[i - 1] = x + '0';*/
	/* result /= 10;*/
	/* }*/

	r[resultLen] = '\0';

	return (r);
}
int main(void)
{
    char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
    char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
    char r[100];
    char r2[10];
    char r3[11];
    char *res;

    res = infinite_add(n, m, r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    n = "1234567890";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    n = "2000000000";
    m = "2000000000";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    res = infinite_add(n, m, r3, 11);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    return (0);
}
