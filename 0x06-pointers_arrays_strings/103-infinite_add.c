/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: pointer to the result string
 */
char *infinite_add(char *n1, char *n2, char *result, int size_result)
{
    int len_n1, len_n2, carry = 0;
    int i, j, k;

    for (i = 0; n1[i]; i++)
        ;
    len_n1 = i;
    for (j = 0; n2[j]; j++)
        ;
    len_n2 = j;

    if (len_n1 > size_result || len_n2 > size_result)
    {
        return 0;
    }

    k = 0;

    for (i = len_n1 - 1, j = len_n2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k++)
    {
        int digit_n1 = i >= 0 ? n1[i] - '0' : 0;
        int digit_n2 = j >= 0 ? n2[j] - '0' : 0;
        int sum = digit_n1 + digit_n2 + carry;
        carry = sum / 10;
        result[k] = sum % 10 + '0';
    }

    result[k] = '\0';

    if (carry)
    {
        return 0;
    }

    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }

    return result; /* Return a pointer to the result buffer.*/
}
