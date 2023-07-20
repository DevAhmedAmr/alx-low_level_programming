int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return 2;
	}

	unsigned char *function_ptr = (unsigned char *)main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02hhx ", function_ptr[i]);
		if (i == num_bytes - 1)
			printf("\n");
	}

	return 0;
}
