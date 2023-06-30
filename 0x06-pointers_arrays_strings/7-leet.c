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
    char charsList[] = "aAeEoOtTlL";

    char charsToNumbers[] = "4433007711";

    int i = 0, j;

    while (*(str + i) != '\0')
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == charsList[j])
            {
                str[i] = charsToNumbers[j];
            }
        }
        i++;
    }
    return (str);
}
