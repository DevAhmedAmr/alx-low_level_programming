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
    int len1 = 0, len2 = 0, len_sum = 0, carry = 0, sum = 0, i = 0, j = 0;

    while (n1[len1] != '\0') /* Calculate length of n1 */
        len1++;
    while (n2[len2] != '\0') /* Calculate length of n2 */
        len2++;

    /* Check if the sum of n1 and n2 can fit in r */
    if (len1 > size_r || len2 > size_r)
    {
        return NULL;
    }

    char *result = malloc(size_r + 1);
    if (!result)
    {
        return NULL;
    }

    /* Add digits from right to left */
    for (i = len1 - 1, j = len2 - 1, len_sum = 0; i >= 0 || j >= 0 || carry; i--, j--)
    {
        sum = carry;

        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        result[len_sum] = sum % 10 + '0';
        carry = sum / 10;
        len_sum++;
    }

    result[len_sum] = '\0';

    if (carry)
    {
        free(result);
        return NULL;
    }

    /* Reverse the string in result */
    for (i = 0, j = len_sum - 1; i < j; i++, j--)
    {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }

    /* Copy the result to r */
    strcpy(r, result);

    /* Free the memory allocated for result */
    free(result);

    /* Return a pointer to the first element of r */
    return r;
}
