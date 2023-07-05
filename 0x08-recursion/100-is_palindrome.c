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
/**
 * compare - a helper function that compare string charcters to determine
 * if the string is a palindrome or not
 *
 * parameters:
 * @start: starting index
 * @end: length or the last letter in the arr
 * @str: the string that we want to know if its palindrome  or not
 *
 * Return: 1 if palindrome otherwise 0
 */

int compare(int start, int end, char *str)
{
	if (str[start] == str[end] && str[start] != '\0' && str[end] != '0')
	{
		return (compare(start + 1, end - 1, str));
	}
	else if (str[start] != str[end])
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * is_palindrome - a function that takes a string and determine
 * if its is_palindrom or not
 *
 * parameters:
 * @s: the string that we want to know if its palindrome  or not
 *
 * Return: 1 if palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int end = _strlen_recursion(s) - 1;

	int start = 0;

	return (compare(start, end, s));
}

