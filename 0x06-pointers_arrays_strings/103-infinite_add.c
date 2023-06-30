void intToString(int num, char *str)
{
    int isNegative = 0;
    int i = 0;
    int length = i;
    int j;

    if (num == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return;
    }

    if (num < 0)
    {
        isNegative = 1;
        num = -num;
    }

    while (num != 0)
    {
        int digit = num % 10;
        str[i++] = digit + '0';
        num /= 10;
    }

    if (isNegative)
    {
        str[i++] = '-';
    }

    str[i] = '\0';

    /* Reverse the string*/

    for (j = 0; j < length / 2; j++)
    {
        char temp = str[j];
        str[j] = str[length - j - 1];
        str[length - j - 1] = temp;
    }
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int num1 = 0;
    int num2 = 0;
    int result;

    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int i, j;

    if (len1 + len2 + 1 > size_r)
    {
        return 0;
    }

      for (i = 0; i < len1; i++)
    {
        num1 = num1 * 10;
        num1 += (n1[i] - '0');
    }

    for (j = 0; j < len2; j++)
    {
        num2 = num2 * 10;
        num2 += (n2[j] - '0');
    }

    result = num1 + num2;

    intToString(result, r);

    return r;
}
