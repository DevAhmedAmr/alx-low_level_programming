
/**
 * infinite_add - adds tp argument from char* as numbers
 * @n1: type char*
 * @n2: type char*
 * @r: buffer size type int char*
 * @size_r: buffer size: type int
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/*declare counter varables*/
	int i, i1, i2, i3, i4, i5;

	for (i = 0; n1[i]; i++)
	;

	for (i1 = 0; n2[i1]; i1++)
	;

	/*checks if either i or j is greater than size_r.*/
	if (i > size_r || i1 > size_r)
	{
		return (0);
	}
	i4 = 0;
	/*loop will stop when it reaches the limit of the buffer size*/
	for (i -= 1, i1 -= 1, i2 = 0; i2 < size_r - 1; i--, i1--, i2++)
	{
		i5 = i4;
		if (i >= 0)
		{
			i5 += n1[i] - '0';
		}
			if (i1 >= 0)
			{
				i5 += n2[i1] - '0';
			}
		/* If this is true, it breaks out of the loop.*/
		if (i < 0 && i1 < 0 && i5 == 0)
		{
			break;
		}
		i4 = i5 / 10;
		r[i2] = i5 % 10 + '0';
	}
	r[i2] = '\0';
	if (i >= 0 || i1 >= 0 || i4)
		return (0);
	for (i2 -= 1, i3 = 0; i3 < i2; i2--, i3++)
	{
		i4 = r[i2];
		r[i2] = r[i3];
		r[i3] = i4;
	}
	return (r);

}
