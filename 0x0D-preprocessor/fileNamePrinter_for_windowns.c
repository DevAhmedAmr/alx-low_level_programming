#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	unsigned int i, j, Len = strlen(__FILE__), fileName_Len = 0;

	char *filePath, *fileName;

	filePath = malloc(Len + 1 * sizeof(char));

	strcpy(filePath, __FILE__);

	i = Len - 1;
	/*dynamicly calculate the len for filename*/

	while (1)
	{
		if (filePath[i] == '\\')
		{
			break;
		}
		fileName_Len++;
		i--;
	}

	fileName = malloc(fileName_Len + 1 * sizeof(char));

	for (i = Len - 1, j = 0; i > 0; i--, j++)
	{
		if (filePath[i] == '\\')
			break;

		fileName[j] = filePath[i];
	}
	fileName[j] = '\0';

	/*reverse the str*/
	for (i = strlen(fileName) - 1, j = 0; i > (strlen(fileName) / 2); i--, j++)
	{
		int tmp = fileName[i];
		fileName[i] = fileName[j];
		fileName[j] = tmp;
	}

	printf("%s\n", fileName);
	free(fileName);
	free(filePath);
}
