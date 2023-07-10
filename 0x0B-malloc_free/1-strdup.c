char *_strdup(char *str)
{
    if (str == NULL)
    {
        return NULL;
    }

    int i;
    int strLen = strlen(str);
    char *strCpy = malloc((strLen) * sizeof(char)); /* Allocate memory for the null-terminator as well*/
    if (strCpy == NULL)
    {
        return NULL;
    }

    if (strCpy == NULL)
    {
        return NULL;
    }
    for (i = 0; i < strLen; i++)
    {
        strCpy[i] = str[i];
    }
    strCpy[strLen] = '\0';
    return strCpy;
}
