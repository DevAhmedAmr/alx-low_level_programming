/**
 * _strlen_recursion - a furnction that return the length of a string by
 * recursive
 *
 * parameters:
 * @s: type string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')

	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

