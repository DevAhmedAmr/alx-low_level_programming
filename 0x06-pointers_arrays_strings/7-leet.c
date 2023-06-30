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


char *leet(char *str)
{
	char charsList[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	char charsToNumbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (i = 0; i < _strlen(str); i++)
	{
		for (j = 0; j < 10 && str[i] != '\0'; j++)
		{
			if (str[i] == charsList[j])
			{
				str[i] = charsToNumbers[j];
			}
		}
	}
	return (str);
}
