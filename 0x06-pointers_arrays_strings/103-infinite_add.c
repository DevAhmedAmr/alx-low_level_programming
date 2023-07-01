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
	/* Declare counter variables */
	int len_n1, len_n2, len_r, carry, sum, i, j;

	/* Calculate lengths of n1 and n2 */
	for (len_n1 = 0; n1[len_n1]; len_n1++)
		;
	for (len_n2 = 0; n2[len_n2]; len_n2++)
		;

	/* Check if either len_n1 or len_n2 is greater than size_r */
	if (len_n1 > size_r || len_n2 > size_r)
	{
		return (0);
	}

	carry = 0;
	/* Loop will stop when it reaches the limit of the buffer size */
	for (len_n1 -= 1, len_n2 -= 1, len_r = 0; len_r < size_r - 1; len_n1--, len_n2--, len_r++)
	{
		sum = carry;
		if (len_n1 >= 0)
		{
			sum += n1[len_n1] - '0';
		}
		if (len_n2 >= 0)
		{
			sum += n2[len_n2] - '0';
		}
		/* If this condition is true, it breaks out of the loop */
		if (len_n1 < 0 && len_n2 < 0 && sum == 0)
		{
			break;
		}
		carry = sum / 10;
		r[len_r] = sum % 10 + '0';
	}
	r[len_r] = '\0';

	if (len_n1 >= 0 || len_n2 >= 0 || carry)
		return (0);

	/* Reverse the result string */
	for (len_r -= 1, i = 0; i < len_r; len_r--, i++)
	{
		j = r[len_r];
		r[len_r] = r[i];
		r[i] = j;
	}

	return (r);
}

