void _print_rev_recursion(char *s)
{
    if (*s)
    {

        _print_rev_recursion(++s);
        putchar(*s);
    }
}

