#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverseString - function that reverse a string by swaping the string chars
 * @str: parameter1 - the string that wanted to be reversed
 * Return: the string reversed
 */

void reverseString(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length / 2; i++)
	{
		char temp = str[i];

		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
}

/**
 * ifninty_Add - adds two numbers stored as strings
 * @num1: first number as a string
 * @num2: second number as a string
 * @result: buffer to store the result
 * Return: pointer to the result string
 */

void ifninty_Add(char *num1, char *num2, char *result)
{
	int sum = 0, carry = 0, i, j, k = 0;
	int len1 = strlen(num1), len2 = strlen(num2);

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry != 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += (int)num1[i] - 48;
		if (j >= 0)
			sum += (int)num2[j] - 48;

		result[k] = sum % 10 + 48;
		carry = sum / 10;
		k++;
	}
	result[k] = '\0';
	reverseString(result);
}

/**
 * additional_Zeros_remover - function that removes additional
 * leading zeros in the result if the input is zeros 0, 00, 000, etc
 * @parameters:
 * @numb: the number to be modified in string form
 *
 * Return: void
 */
void additional_Zeros_remover(char *numb)
{

	int i;
	int len = strlen(numb);
	int isZero = 0;

	for (i = 0; i < len; i++)
	{
		if (numb[i] != '0')
		{
			isZero = 1;
			break;
		}
	}
	if (isZero == 0)
	{

		strcpy(numb, "0");
	}
}
/**
 * multiplicate - function that multiplicate 2 infinite numbers
 *
 * @parameters:
 * @num1: first number
 * @num2: second number
 *
 * Return: 0 on successes , if fails returns 1
 */

int multiplicate(char *num1, char *num2)
{
	int mul, len1, len2, carry = 0, buffer_count = 0, i, k, j;
	int needCarry = 0, zerosCountAdd = 0, subNum1, subNum2;
	char *finalSum, *buffer, *tmp;

	len1 = strlen(num1);
	len2 = strlen(num2);
	finalSum = malloc(sizeof(char) * (len1 + len2 + 1));
	buffer = malloc(sizeof(char) * (len1 + len2 + 1));
	tmp = malloc(sizeof(char) * (len1 + len2 + 1));

	if (finalSum == NULL || buffer == NULL || tmp == NULL)
	{
		/*fprintf(stderr, "Memory allocation failed!\n");*/;
		return (1);
	}
	finalSum[0] = '0';
	finalSum[1] = '\0';

	for (i = len2 - 1; i >= 0; i--)
	{
		carry = 0;

		for (k = 0; k < zerosCountAdd; k++)
		{
			buffer[buffer_count] = 48;
			buffer_count++;
		}

		for (j = len1 - 1; j >= 0; j--)
		{
			if (i >= 0)
			{
				subNum1 = (((int)num1[j] - 48));
				subNum2 = ((int)num2[i] - 48);

				if (subNum1 > 9 || subNum2 > 9)
				{
					printf("Error\n");
					exit(98);
				}

				mul = subNum2 * subNum1 + carry;
				carry = mul / 10;
				buffer[buffer_count] = mul % 10 + 48;
				buffer_count++;
			}
		}

		if (carry > 0)
		{
			buffer[buffer_count] = carry + 48;
			needCarry = 1;
		}

		if (needCarry == 1)
			buffer[buffer_count + 1] = '\0';
		else
			buffer[buffer_count] = '\0';

		reverseString(buffer);
		needCarry = 0;
		zerosCountAdd++;

		ifninty_Add(finalSum, buffer, tmp);
		strcpy(finalSum, tmp);
		buffer_count = 0;
	}

	additional_Zeros_remover(finalSum);
	printf("%s\n", finalSum);

	free(finalSum);
	free(buffer);
	free(tmp);
	return (0);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of 2 numbers in a string form
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (multiplicate(argv[1], argv[2]) == 1)
	{
		return (1);
	}

	return (0);
}
