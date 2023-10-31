#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: A NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _fd, _write_result;

	if (filename == NULL)
		return (-1);

	_fd = open(filename, O_WRONLY | O_APPEND);

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
