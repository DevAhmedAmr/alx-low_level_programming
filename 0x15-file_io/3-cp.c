#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int open_file_from(char *file)
{
	int file_from = open(file, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return file_from;
}

int open_file_to(char *file, int file_from)
{
	int file_to = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		close(file_from);
		exit(99);
	}
	return file_to;
}

void copy_files(int file_from, int file_to, char *file_to_name)
{
	char buff[1024];
	ssize_t read_status, write_status;

	while ((read_status = read(file_from, buff, 1024)) > 0)
	{
		write_status = write(file_to, buff, read_status);
		if (write_status != read_status)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to_name);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}

	if (read_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to_name);
		close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(98);
	}
}

void close_files(int file_from, int file_to)
{
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
}

int main(int argc, char **argv)
{
	int file_from, file_to;
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open_file_from(argv[1]);
	file_to = open_file_to(argv[2], file_from);
	copy_files(file_from, file_to, argv[2]);
	close_files(file_from, file_to);

	return 0;
}