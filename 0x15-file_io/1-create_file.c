#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"
#include <string.h>

/**
 * create_file - creates a file with the given content
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
	return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
	return (-1);

	if (text_content)
	{
	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);
}

