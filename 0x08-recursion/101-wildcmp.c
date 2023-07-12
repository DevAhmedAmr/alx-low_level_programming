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
		s2 -= 1;
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

