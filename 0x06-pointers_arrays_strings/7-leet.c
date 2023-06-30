/**
 * _strlen -  a function that returns the length of a string.
 *
 * @s: type str
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * leet - function that encodes a string into 1337.
 * Mozart composed his music not for the elite,
 * but for everybody
 * @str: string that wanted to be encoded
 * Return: str
 */
char *leet(char* str)
{
	char* strPointer = str;

	char lettersToReplace[] = {'A', 'E', 'O', 'T', 'L'};
	int replacementValues[] = {4, 3, 0, 7, 1};

	unsigned int i;
	while (*str)
	{
		for (i = 0; i < sizeof(lettersToReplace) / sizeof(char); i++)
		{
			if (*str == lettersToReplace[i] || *str == lettersToReplace[i] + 32)
			{
				*str = 48 + replacementValues[i];
			}
		}
		str++;
	}
	return (strPointer);
}

