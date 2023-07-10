#include"stdlib.h"
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arry;

	if (size == 0)
		return (NULL);
	
	arry = malloc(sizeof(char) * size);

	if (arry == NULL)
		reutrn (NULL);

	for (i = 0; i < size; i++)
	{
		arry[i] = c;
	}

	return (arry);
}

