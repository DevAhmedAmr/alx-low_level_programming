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
	int i, j;

	int len = _strlen(str);

	char *normalLetters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == normalLetters[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}
