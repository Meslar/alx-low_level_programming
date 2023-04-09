#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: The number of letters read and printed, or 0 if an error occurred.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	char *buffer = malloc(sizeof(char) * (letters + 1));
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';

	if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_read);
}
