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
	int i;

	char normalLetters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*str)
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == normalLetters[i])
			{
				*str = rot13[i];
				break;
			}
		}
		str++;
	}
	return (str);
}

