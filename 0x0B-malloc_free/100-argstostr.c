char *argstostr(int ac, char **av)
{
    char *str;
    int j, i, len, k;

    if (ac == 0 || av == NULL)
        return NULL;

    len = 0;
    for (i = 1; i < ac; i++)
    {
        len += strlen(av[i]) + 1; 
    }
    str = malloc((len * sizeof(char)) + 1);

    if (str == NULL)
    return NULL;
    

    i = 0;
    k = 0;

    for (i = 1; i < ac; i++)
    {
        for (j = 0; j <= strlen(av[i]); j++)
        {
            if (av[i][j] == '\0') 
            {
                str[k] = '\n';
                k++;
                continue;
            }

            str[k] = av[i][j];
            k++;
        }
    }
    str[len] = '\0';
    return str;
}
