/**
 * _memset - function that fills memory with a constant byte.
 * @s: the string that wanted to be filled the byte
 * @b: the char that the s wanted to be filled with
 * @n: size of s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = 0;

	while(s[size])
		size++;

	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	s[n+1] = '\0';
	return (s);
}
