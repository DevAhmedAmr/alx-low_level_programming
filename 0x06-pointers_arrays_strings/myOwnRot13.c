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
	int len = _strlen(str);

	for (int i = 0; i < len; i++)
	{
		/* Check if the character is a lowercase letter */
		if ((int)str[i] > 96 && (int)str[i] < 123)
		{
			/* Apply the ROT13 cipher to the lowercase letter */
			/* Apply the ROT13  to the lowercase letter at position i in the string */
			str[i] = ((((int)str[i] + 13) /* Shift the letter 13 positions ahead  */
						- 97) /* Convert ASCII code of 'a' to index 0 */
					% (123 - 97)) /* Wrap around if the value exceeds 25 */
				+ 97; /* Convert index back to ASCII code of 'a' */
		}
		/* Check if the character is an uppercase letter */
		else if ((int)str[i] > 64 && (int)str[i] < 91)
		{
			/* Apply the ROT13 cipher to the uppercase letter */
			str[i] = ((((int)str[i] + 13) - 65) % (91 - 65)) + 65;
		}
	}
	/* Return the encrypted string */
	return (str);
}
/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";

	char *p;

	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	return (0);
}
