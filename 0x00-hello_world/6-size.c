/**
 * main: - Entry point
 *
 * Description: Application to print the size of various types on the computer
 *
 * Return: 0 (success) else (failed)
 */

int main(void)
{
char character = 'a';
int integer = 1;
long int longInteger = 100000;
long long int longLongInt = 1000000000000;
float floatNum = 3.44;

printf("Size of a char: %d byte(s)\n", sizeof(character));
printf("Size of an int: %d byte(s)\n", sizeof(integer));
printf("Size of a long int: %d byte(s)\n", sizeof(longInteger));
printf("Size of a long long int: %d byte(s)\n", sizeof(longLongInt));
printf("Size of a float: %d byte(s)\n", sizeof(floatNum));
}
