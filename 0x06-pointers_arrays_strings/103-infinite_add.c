char *reverseStr(char *str, int len)
{
	int i, j;
	for (i = len - 1, j = 0; j < len / 2; i--, j++)
	{
		int tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	return str;
}

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
    /*declare counter varables*/
    int len1 = 0, len2 = 0, sum = 0, carry = 0;
    int i, j, r_counter = 0;
    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;
    if (len1 > size_r || size_r < len2)
        return 0;

    for (i = len1 - 1, j = len2 - 1; r_counter < size_r; i--, j--)
    {
        /*carry used to store ten in it ,*/
        /*so that we make sum = carry so we can */
        /*calculate it with the new irritation variables */
        sum = carry;
        if (i >= 0)
        {
            int charToInt = n1[i] - 48;
            sum += charToInt;
        }
        if (j >= 0)
        {
            int charToInt = n2[j] - 48;
            sum += charToInt;
        }
        /*break if true to prevent adding additional 0*/
        if (i < 0 && j < 0 && carry == 0)
            break;
        /*store the one in the ''r'' variable */
        r[r_counter] = (sum % 10) + 48;
        /*store ten at the carry variable*/
        carry = sum / 10;
        r_counter++;
    }
    r[r_counter] = '\0';
    reverseStr(r, r_counter);
    return r;
}
