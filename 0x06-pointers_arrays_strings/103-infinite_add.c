#include"main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to add.
 * @n2: The second number to add.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, len_sum = 0, carry = 0, sum = 0, i = 0, j = 0;

    while (n1[len1] != '\0') /* Calculate length of n1 */
        len1++;
    while (n2[len2] != '\0') /* Calculate length of n2 */
        len2++;

    /* Check if the sum of n1 and n2 can fit in r */
    if (len1 > size_r || len2 > size_r)
        return (0);

    /* Add digits from right to left */
    for (i = len1 - 1, j = len2 - 1, len_sum = 0; i >= 0 || j >= 0 || carry != 0; i--, j--)
    {
        sum = carry;

        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        r[len_sum] = sum % 10 + '0';
        carry = sum / 10;
        len_sum++;
    }

      if (carry)
    {
        return 0;
    }

    /* Reverse the string in r */
    for (i = 0, j = len_sum - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    r[len_sum] = '\0';

    return (r);
}
