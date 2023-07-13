/**
 * wildcmpHelper - a helper function that compares 2 strings
 * that contains wildcards
 *
 * parameters:
 * @s1: the first string that wanted to be compared
 * @s2: the second string to be compared
 * @seenAstar: a boolen that checks if s2 has star or not
 *
 * Return: 1 two strings are identical else 0
 */
int wildcmpHelper(char *s1, char *s2, int seenAstar)
{
	if (*s2 == '*')
	{
		s2++;
		seenAstar = 1;
		return (wildcmpHelper(s1, s2, seenAstar));
	}
	if (*s1 != *s2 && *s1 != '\0')
	{
		if (seenAstar == 1)
			s1++;
		else
			return (0);
	}
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		if (*s2 == '*')
			s2++;
		else
			return (0);
	}
	if (*s1 != '\0' && *s2 == '\0')
	{
		if (*s1 != *s2 && *s1 != '\0')
		{
			s1++;
			return (wildcmpHelper(s1, s2, seenAstar));
		}
		if (*s1 != *s2)
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmpHelper(s1, s2, seenAstar));
}

/**
 * wildcmp - a function that compares 2 strings that contains wildcards
 *
 * parameters:
 * @s1: the first string that wanted to be compared
 * @s2: the second string to be compared
 *
 * Return: 1 two strings are identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	int seenAstar = 0;

	if (*s2 == '*')
	{
		s2++;
		seenAstar = 1;
		return (wildcmp(s1, s2));
	}

	if (*s1 != *s2 && *s1 != '\0')
	{
		s1++;
		return (wildcmp(s1, s2));
	}
	return (wildcmpHelper(s1, s2, seenAstar));
}

