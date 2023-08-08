#include "main.h"
#include <string.h>
/**
 * create_file - fuction that creates a file with an giving text
 *  and name for the file
 *
 * @param
 * @text_content: text contented to be saved on a file
 * @filename: name of the file to be created
 *
 * Return:1 on success, -1 on failure
 * (file can not be created, file can not be written, write “fails”, etc…)
 *
 */
int create_file(const char *filename, char *text_content)
{

	int fd, write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (text_content == NULL)
		text_content = "";

	if (fd == -1)
		return (-1);

	write_status = write(fd, text_content, strlen(text_content));

	if (write_status == -1)
		return (-1);

	(close(fd));

	return (1);
}