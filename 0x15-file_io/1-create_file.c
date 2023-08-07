#include "main.h"
#include <string.h>

int create_file(const char *filename, char *text_content)
{

	int fd, n, c_value;

	fd = open(filename, O_CREAT | O_WRONLY | O_EXCL, S_IRUSR | S_IWUSR);

	if (filename == NULL)
	{

		c_value = close(fd) == -1;

		if (c_value == -1)
			return c_value;

		return -1;
	}

	if (text_content == NULL)

		text_content = "";

	if (fd == -1)
		return -1;

	n = write(fd, text_content, strlen(text_content));

	if (n == -1)
		return -1;

	if (close(fd) == -1)
	{
		return -1;
	}
	return 1;
}