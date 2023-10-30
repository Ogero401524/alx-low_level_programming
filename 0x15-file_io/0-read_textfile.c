#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads and prints text from a file to stdout.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _fd;
	ssize_t bytes_read, bytes_written;
	char *_buffer;

	if (filename == NULL)
		return (0);

	_fd = open(filename, O_RDONLY);
	if (_fd == -1)
		return (0);

	_buffer = malloc(sizeof(char) * letters);
	if (_buffer == NULL)
	{
		close(_fd);
		return (0);
	}

	bytes_read = read(_fd, _buffer, letters);
	if (bytes_read == -1)
	{
		free(_buffer);
		close(_fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, _buffer, bytes_read);
	if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
	{
		free(_buffer);
		close(_fd);
		return (0);
	}

	free(_buffer);
	close(_fd);
	return (bytes_written);
}
