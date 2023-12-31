#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function that appends text to file
 *
 * @parm
 *
 * @filename: variable to file name
 * @text_content: variable to text content
 *
 * Return: 1 on success || -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		if (access(filename, F_OK | W_OK) == -1)
			return (-1);

		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	write_status = write(fd, text_content, strlen(text_content));

	if (write_status == -1)
		return (-1);

	close(fd);
	return (1);
}
