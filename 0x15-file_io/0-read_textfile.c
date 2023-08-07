#include "main.h"
/**
 * read_textfile - function that reads text from file
 *
 * @filename: file name
 * @letters: number of letter to be read
 *
 * Return: number of letter which is read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_num, write_num;
	char *buffer = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	read_num = read(fd, buffer, letters);

	close(fd);

	write_num = write(STDOUT_FILENO, buffer, read_num);

	free(buffer);

	if (write_num == -1 || write_num != read_num)
		return (0);

	return (read_num);
}
