char *_strpbrk(char *s, char *accept)
{
    unsigned int sLen = 0, acceptLen = 0, j, i;
    /*get s variable length*/
    while (s[sLen] != '\0')
        sLen++;

    /*get accept variable length*/
    while (accept[acceptLen] != '\0')
        acceptLen++;

    for (i = 0; i < sLen; i++)
    {

        for (j = 0; j < acceptLen; j++)
        {
            if (*s == accept[j])
            {
                return s;
            }
        }
        s++;
    }
    return NULL;
}
