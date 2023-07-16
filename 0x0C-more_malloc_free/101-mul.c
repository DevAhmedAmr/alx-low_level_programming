#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcpy - my custom implementation for strcpy function in c
 *
 * @dest: destination
 * @src: src to be copied
 *
 * Return: a pointer for destination after copying src to it
 */
char *_strcpy(char *dest, char *src)

{
	unsigned int i = 0;

	for (; i <= strlen(src); i++)

		dest[i] = src[i];
	
	return (dest);
}

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
 * additional_Zeros_remover - function that removes the leading zeros
 * in the result if the input is 00 ,000 ,0000 ,etc
 *
 * @numb: the result that will be modifyed
 *
 * Return:void
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
		_strcpy(numb, "0");
	}
}
/**
 * main - Entry point to program the multiablicate infinty numbers of intigers
 *
 * @argc: number of arguments
 * @argv: arguments values
 *
 * Return: 1 on succsess
 */
int main(int argc, char **argv)
{
	char *num1;
	char *num2;

	int mul, len1, len2, carry = 0, buffer_count = 0, i, k, j;
	int needCarry = 0;
	int zerosCountAdd = 0;
	char *finalSum;
	char *buffer;
	char *tmp;
	int subNum1, subNum2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = malloc(strlen(argv[1]) * sizeof(char) + 1);
	num2 = malloc(strlen(argv[2]) * sizeof(char) + 1);

	if (num1 == NULL || num2 == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return 1;
	}

	strcpy(num1, argv[1]);
	strcpy(num2, argv[2]);

	len1 = strlen(num1);
	len2 = strlen(num2);

	finalSum = malloc(sizeof(char) * (len1 + len2 + 1));
	buffer = malloc(sizeof(char) * (len1 + len2 + 1));
	tmp = malloc(sizeof(char) * (len1 + len2 + 1));

	if (finalSum == NULL || buffer == NULL || tmp == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		free(num1);
		free(num2);
		return 1;
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
	free(num1);
	free(num2);

	return 0;
}

