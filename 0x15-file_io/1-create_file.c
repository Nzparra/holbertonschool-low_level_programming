#include "holberton.h"
/**
 * create_file - Function that creates a file
 * @filename: Name of the file
 * @text_content: Content of the file
 * Return: 1 if all is ok, -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, c;
	int writecount;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (0);
	}
	if (text_content)
	{
		for (c = 0; text_content[c] != '\0'; c++)
		{}
		writecount = write(fd, text_content, c);
		if (writecount == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
