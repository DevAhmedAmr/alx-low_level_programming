#include<stdio.h>
#include<string.h>
void _printf(char *str, char *firstVariable)
{
	int j = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '%')
		{
			char specifier[10];
			int k = 0;

			// Identify the specifier
			while (str[i] != ' ')
			{
				specifier[k] = str[i];
				k++;
				i++;
			}
			specifier[k] = '\0';

			if (strcmp(specifier, "%s") == 0)
			{
				while (firstVariable[j] != '\0')
				{
					putchar(firstVariable[j]);
					j++;
				}
			}
		}
		putchar(str[i]);
	}
}

int main(void)
{
    _printf("my age is %s amr ali mohamed", "2252000");
    return 0;
}

