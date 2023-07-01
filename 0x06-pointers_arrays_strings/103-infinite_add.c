/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: pointer to the result string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, len_sum = 0, carry = 0, i = 0, j = 0;

    char *result_ptr;

    for (i = 0; n1[i]; i++)
        ;
    len1 = i;
    for (j = 0; n2[j]; j++)
        ;
    len2 = j;

    /* Check if the sum of n1 and n2 can fit in r */
    if (len1 > size_r || len2 > size_r)
    {
        return 0;
    }

    /* Add digits from right to left */
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, len_sum++)
    {
        int digit_n1 = i >= 0 ? n1[i] - '0' : 0;
        int digit_n2 = j >= 0 ? n2[j] - '0' : 0;
        int sum = digit_n1 + digit_n2 + carry;
        carry = sum / 10;
        r[len_sum] = sum % 10 + '0';
    }

    r[len_sum] = '\0';

    if (carry)
        return 0;

    /* Reverse the string in r */
    for (i = 0, j = len_sum - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    /* Declare a pointer variable and assign the address of the result buffer to it */
    result_ptr = r;

    /* Return the pointer variable */
    return result_ptr;
}
