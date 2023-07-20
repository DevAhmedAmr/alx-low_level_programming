#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);

	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);

	}

	unsigned char *function_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx ", function_ptr[i]);
		if (i == num_bytes - 1)
			printf("\n");
	}

	return 0;
}
