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

			// Uncomment and complete the code for other specifiers, such as "%d" or "%i"
			// if (strcmp(specifier, "%d") == 0 || strcmp(specifier, "%i") == 0)
			// {
			// 	int numberLen = 0, numbercpy = firstVariable;

			// 	/*get the length of the number*/
			// 	while (numbercpy > 0)
			// 	{
			// 		numbercpy = numbercpy / 10;
			// 		numberLen++;
			// 	}

			// 	/*print the number num by num*/
			// 	while (numberLen > 0)
			// 	{
			// 		double devsion = pow(10, (numberLen - 1));
			// 		double mod = pow(10, numberLen);
			// 		putchar(firstVariable % (int)mod / (int)devsion + 48);
			// 		numberLen--;
			// 	}
			// }

		}
		putchar(str[i]);
	}
}


int main(void)
{
    _printf("my age is %s amr ali mohamed", "2252000");
    return 0;
}

