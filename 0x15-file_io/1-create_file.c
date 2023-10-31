#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file with the specified text content.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int _fd, _write_result;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (_fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		_write_result = write(_fd, text_content, strlen(text_content));
		if (_write_result == -1)
		{
			close(_fd);
			return (-1);
		}
	}

	close(_fd);
	return (1);
}
