/**
 * string_toupper - function converts small letters to capital letters
 * @a: string that wanted to be changed
 *
 * Return: a (string after the convertion)
 */
char *string_toupper(char *a)
{
	int i, j;
	char capitals[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char smalls[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (a[i] == smalls[j])
			{
				a[i] = capitals[j];
			}
		}
	}
	return (a);
}
