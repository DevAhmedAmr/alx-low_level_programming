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
 * rot13 - Applies the ROT13 substitution cipher to a string
 * Replaces each letter in the string with the letter 13 positions
 * ahead of it in the alphabet, wrapping around from 'z' to 'a' or
 * from 'Z' to 'A' if necessary.
 *
 * Parameters:
 * @str: A pointer to the null-terminated string to encrypt.
 *
 * Return:
 * A pointer to the encrypted string.
 */
char *rot13(char *str)
{
	int i, j = 0;

	char *normalLetters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int strLen = _strlen(str);

	/*char *ptr = str;*/

	while (j < strLen)
	{
		for (i = 0; i < 53; i++)
		{
			if (str[j] == normalLetters[i])
			{
				str[j] = rot13[i];
				break;
			}
		}
		j++;
	}
	str[strLen] = '\0';

	return (str);
}
