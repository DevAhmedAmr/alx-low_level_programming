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
int compare(int start, int end, char *str)
{

    if (str[start] == str[end] && str[start] != '\0' && str[end] != '0')
    {

        return compare(start + 1, end - 1, str);
    }
    else if ((str[start] != str[end]))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int is_palindrome(char *s)
{
    int end = _strlen_recursion(s) - 1;
    int start = 0;
    return compare(start, end, s);
}
