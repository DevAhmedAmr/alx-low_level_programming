/**
 * _memset - function that fills memory with a constant byte.
 * @s: the string that wanted to be filled the byte
 * @b: the char that the s wanted to be filled with
 * @n: size of s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
