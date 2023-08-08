#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void error_and_exit(const char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}

int open_file(char *path, int flags, mode_t mode)
{
	int file_desc = open(path, flags, mode);
	if (file_desc == -1)
	{
		error_and_exit("Error: Can't open file", 98);
	}
	return file_desc;
}

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		error_and_exit("Error: Can't close file", 100);
	}
}

void copy_file(int file_from, int file_to)
{
	char buff[1024];
	ssize_t read_status, write_status;

	while ((read_status = read(file_from, buff, 1024)) > 0)
	{
		write_status = write(file_to, buff, read_status);
		if (write_status != read_status)
		{
			error_and_exit("Error: Can't write to file", 99);
		}
	}

	if (read_status == -1)
	{
		error_and_exit("Error: Can't read from file", 98);
	}
}

int main(int argc, char **argv)
{
	int file_from, file_to;

	if (argc != 3)
	{
		error_and_exit("Usage: cp file_from file_to", 97);
	}

	file_from = open_file(argv[1], O_RDONLY, 0);
	file_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	copy_file(file_from, file_to);

	close_file(file_from);
	close_file(file_to);

	return 0;
}