char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		return NULL;
	}

	char *arry = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		arry[i] = c;
	}

	return arry;
}

