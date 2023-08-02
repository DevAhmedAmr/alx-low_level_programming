/**
 * _memcpy - function that coppy a string to another string
 * @dest: destination ( variable wanted to be copied to )
 * @src: the variable that wanted to be copied
 * @n: the length of the string to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
