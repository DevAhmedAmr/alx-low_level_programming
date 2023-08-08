#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * open_files - Opens the source and destination files.
 * @argc: The argument count.
 * @argv: The argument vector.
 * @file_from: A pointer to the source file descriptor.
 * @file_to: A pointer to the destination file descriptor.
 *
 * Return: Nothing.
 */
void open_files(int argc, char **argv, int *file_from, int *file_to)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	*file_from = open(argv[1], O_RDONLY, 0);

	if (*file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (*file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*file_from);
		exit(99);
	}
}

/**
 * copy_and_close_files - Copies content from source to destination
 * file and closes both.
 *
 * @file_from: The source file descriptor.
 * @file_to: The destination file descriptor.
 * @argv: The argument vector.
 *
 * Return: Nothing.
 */
void copy_and_close_files(int file_from, int file_to, char **argv)
{
	int read_status, write_status;
	char buff[1024];

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

/**
 * main - The main function of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success,
 * other values on error (from open_files or copy_and_close_files).
 */
int main(int argc, char **argv)
{
	int file_to, file_from;

	open_files(argc, argv, &file_from, &file_to);
	copy_and_close_files(file_from, file_to, argv);

	return (0);
}
