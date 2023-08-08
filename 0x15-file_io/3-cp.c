#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char **argv)
{
	int file_to, read_status, write_status;
	int file_from;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY, 0);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	while ((read_status = read(file_from, buff, 1024)) > 0)
	{
		write_status = write(file_to, buff, read_status);

		if (write_status != read_status)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (read_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(98);
	}

	if (close(file_from) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}

	if (close(file_to) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}

	return 0;
}