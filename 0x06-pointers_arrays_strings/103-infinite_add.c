/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: pointer to the result string
 */
char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
    int i, len_num1, len_num2, carry = 0, sum = 0, index = 0;

    for (i = 0; num1[i]; i++)
        ;
    len_num1 = i;

    for (i = 0; num2[i]; i++)
        ;
    len_num2 = i;

    index = 0;

    for (i = len_num1 - 1; i >= 0 || len_num2 - 1 >= i || carry; i--, index++)
    {
        int digit_num1 = i >= 0 ? num1[i] - '0' : 0;
        int digit_num2 = len_num2 - 1 >= i ? num2[i] - '0' : 0;
        sum = digit_num1 + digit_num2 + carry;
        carry = sum / 10;
        result[index] = sum % 10 + '0';
    }

    result[index] = '\0';

    for (i = 0, index = index - 1; i < index; i++, index--)
    {
        char temp = result[i];
        result[i] = result[index];
        result[index] = temp;
    }

    return result;
}
