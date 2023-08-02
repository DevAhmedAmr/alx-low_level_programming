/**
 * len - function that calculate the length of a string
 * @str: parameter type string
 *
 * Return: length of the string
 */
int len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}


/**
 * reverseStr - function that reverse a string by swaping the string chars
 * @str: parameter1 - the string that wanted to be reversed
 * @len: parameter2 - the length of that string
 * Return: the string reversed
 */

char *reverseStr(char *str, int len)
{
	int i, j;

	for (i = len - 1, j = 0; j < len / 2; i--, j++)
	{
		int tmp = str[i];

		str[i] = str[j];
		str[j] = tmp;
	}
	return (str);
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
	int len1 = len(n1), len2 = len(n2), sum = 0, carry = 0;
	int i, j, r_counter = 0;

	if (len1 > size_r || size_r < len2)
		return (0);
	for (i = len1 - 1, j = len2 - 1; r_counter < size_r - 1; i--, j--)
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
	if (i >= 0 || j >= 0 || carry != 0)
		return (0);
	r[r_counter] = '\0';
	reverseStr(r, r_counter);
	return (r);
}
