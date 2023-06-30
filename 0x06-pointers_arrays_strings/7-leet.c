/**
 * leet - function that encodes a string into 1337.
 * Mozart composed his music not for the elite,
 * but for everybody
 * @c: string that wanted to be encoded
 * Return: str
 */
char *leet(char *c)
{
	int i, j;
	char number[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((int)c[i] == (int)letters[j])
			{
				c[i] = number[j / 2];
				break;
			}
		}
	}
	return (c);
}
