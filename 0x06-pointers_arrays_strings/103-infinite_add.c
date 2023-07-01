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
    /* Declare counter variables */
    int len_num1, len_num2, sum, carry = 0, index_result = 0, index_num1, index_num2;

    for (index_num1 = 0; num1[index_num1]; index_num1++)
        ;
    len_num1 = index_num1;

    for (index_num2 = 0; num2[index_num2]; index_num2++)
        ;
    len_num2 = index_num2;

    /* Check if either len_num1 or len_num2 is greater than result_size */
    if (len_num1 > result_size || len_num2 > result_size)
    {
        return 0;
    }

    carry = 0;
    /* Loop will stop when it reaches the limit of the buffer size */
    for (index_num1 -= 1, index_num2 -= 1, index_result = 0; index_result < result_size - 1; index_num1--, index_num2--, index_result++)
    {
        sum = carry;
        if (index_num1 >= 0)
        {
            sum += num1[index_num1] - '0';
        }
        if (index_num2 >= 0)
        {
            sum += num2[index_num2] - '0';
        }
        /* If this is true, it breaks out of the loop */
        if (index_num1 < 0 && index_num2 < 0 && sum == 0)
        {
            break;
        }
        carry = sum / 10;
        result[index_result] = sum % 10 + '0';
    }
    result[index_result] = '\0';

    if (index_num1 >= 0 || index_num2 >= 0 || carry)
        return 0;

    /* Reverse the result */
    for (index_result -= 1, index_num1 = 0; index_num1 < index_result; index_result--, index_num1++)
    {
        int temp = result[index_result];
        result[index_result] = result[index_num1];
        result[index_num1] = temp;
    }

    return result;
}
