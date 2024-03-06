#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - Copy the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 * Return: 0 on success, 97, 98, 99, or 100 on failure.
 */
/**
 *File descriptors and permissions
 */
int main(int argc, char *argv[])
{
    int _fd_from, _fd_to;
    ssize_t _read_result, _write_result;
    char _buffer[BUFFER_SIZE];

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

    _fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (_fd_to == -1)
    {
        dprintf(2, "Error: Can't write to file %s\n", argv[2]);
        close(_fd_from);
        return (99);
    }

    do {
        _read_result = read(_fd_from, _buffer, BUFFER_SIZE);
        if (_read_result == -1)
        {
            dprintf(2, "Error: Can't read from file %s\n", argv[1]);
            close(_fd_from);
            close(_fd_to);
            return (98);
        }
        _write_result = write(_fd_to, _buffer, _read_result);
        if (_write_result == -1)
        {
            dprintf(2, "Error: Can't write to file %s\n", argv[2]);
            close(_fd_from);
            close(_fd_to);
            return (99);
        }
    } while (_read_result > 0);

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
