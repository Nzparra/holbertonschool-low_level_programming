#include "holberton.h"
/**
 * append_text_to_file - Function that appends text at the end
 * @filename: Name of the file
 * @text_content: Content of the file
 * Return: 1 if all is ok, -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, c;
	int writecount;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	for (c = 0; text_content[c] != '\0'; c++)
	{}
	writecount = write(fd, text_content, c);
	if (writecount == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
