#include "main.h"
#include <string.h>

int create_file(const char *filename, char *text_content)
{

	int fd, n;
	fd = open(filename, O_CREAT | O_WRONLY | O_EXCL, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return -1;

	n = write(fd, text_content, strlen(text_content));

	if (n == -1)
		return -1;

	close(fd);
	return 1;
}