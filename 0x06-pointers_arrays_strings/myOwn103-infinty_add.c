/*impelementation of a calculator but its limited by unsigned long or int*/
/* since Long Long is not allowed in the alx 0x006 more pointer and array*/
/* task*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/*declare counter varables*/
	int len1 = 0, len2 = 0, integer1 = 0, integer2 = 0, i, j, resultLen = 0;

	unsigned int result, resultCpy;

	while (n1[len1] != '\0')

		len1++;

	while (n2[len2] != '\0')

		len2++;

	/*checks if either i or j is greater than size_r.*/

	for (i = 0; i < len1; i++)
	{
		integer1 *= 10;
		integer1 += n1[i] - 48;
	}
	for (j = 0; j < len2; j++)
	{
		integer2 *= 10;
		integer2 += n2[j] - 48;
	}
	result = integer1 + integer2;

	/*to prevent the original result to be modified*/
	resultCpy = result;

	/* calculate the length of the result that is in integer state*/
	while (resultCpy > 0)
	{
		resultCpy /= 10;
		resultLen++;
	}

	/* convert the result from integer to string then assign it to r*/
	for (i = 0; i < resultLen; i++)
	{
		int x = result % 10;

		r[resultLen - i - 1] = x + '0';
		result /= 10;
	}
	r[resultLen] = '\0';

	return (r);
}
