#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, or the appropriate exit code on failure.
 */
int main(int argc, char **argv)
{
    int _fd_from, _fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        return (97);
    }

    _fd_from = open(argv[1], O_RDONLY);
    if (_fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    _fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (_fd_to == -1)
    {
        dprintf(2, "Error: Can't write to file %s\n", argv[2]);
        close(_fd_from);
        return (99);
    }

    while ((bytes_read = read(_fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(_fd_to, buffer, bytes_read);
        if (bytes_written == -1)
        {
            dprintf(2, "Error: Can't write to file %s\n", argv[2]);
            close(_fd_from);
            close(_fd_to);
            return (99);
        }
    }

    if (bytes_read == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        close(_fd_from);
        close(_fd_to);
        return (98);
    }

    if (close(_fd_from) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", _fd_from);
        return (100);
    }

    if (close(_fd_to) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", _fd_to);
        return (100);
    }

    return (0);
}
