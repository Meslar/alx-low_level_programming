#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, otherwise a positive error code
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int from_fd, to_fd, r_count, w_count;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		close(from_fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		r_count = read(from_fd, buffer, 1024);
		if (r_count == -1)
		{
			close(from_fd);
			close(to_fd);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w_count = write(to_fd, buffer, r_count);
		if (w_count == -1)
		{
			close(from_fd);
			close(to_fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (r_count > 0);

	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (0);
}

