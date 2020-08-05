#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the  standard output.
 * @filename: file descriptor
 * @letters: numb of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n = 0;
	int fd;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	n = read(fd, buf, letters);
	if (n == -1)
		return (0);
	n = write(STDOUT_FILENO, buf, n);
	free(buf);
	close(fd);
	return (n);
}
