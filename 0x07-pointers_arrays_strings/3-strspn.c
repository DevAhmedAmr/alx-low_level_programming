unsigned int _strspn(char *s, char *accept)
{
unsigned int sLen = 0, acceptLen = 0, x = 0, j, i;
while (s[sLen] != '\0')
{
sLen++;
}
while (accept[acceptLen] != '\0')
{
acceptLen++;
}

ini
Copy
for (i = 0; i < sLen; i++)
{

    for (j = 0; j < acceptLen; j++)
    {

        if (s[i] == accept[j])
        {
            x = 1;
            break;
        }
        x = 0;
    }
    /* printf("-----------\n");*/

    if (x == 0)
    {
        return i;
    }
}

return i;
}
unsigned int _strspn(char *s, char *accept)
{
unsigned int sLen = 0, acceptLen = 0, is_match = 0, j, i;
/get s variable length/
while (s[sLen] != '\0')
sLen++;

ini
Copy
/*get accept variable length*/
while (accept[acceptLen] != '\0')
	acceptLen++;

for (i = 0; i < sLen; i++)
{

	for (j = 0; j < acceptLen; j++)
	{
		if (s[i] == accept[j])
		{
			is_match  = 1;
			break;
		}
		is_match  = 0;
	}
	if (is_match  == 0)
	{
		return i;
	}
}

return i;
}
