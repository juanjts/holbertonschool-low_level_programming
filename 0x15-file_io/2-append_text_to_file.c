#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content:  is the NULL
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, l;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (l = 0; text_content[l] != '\0'; l++)
			;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	write(fd, text_content, l);
	return (1);
}
