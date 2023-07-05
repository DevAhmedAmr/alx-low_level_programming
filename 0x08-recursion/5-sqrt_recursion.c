int _sqrt_recursion(int n)
{
    int num = 0;

    return sqrtHelper(num, n);
}
sqrtHelper(int num, int n)
{
    if (num > n)
    {
        return -1;
    }

    if (num * num != n)
    {
        return sqrtHelper(num + 1, n);
    }

    return num;
}
