#include "holberton.h"
/**
 * read_textfile - Function that reads a text and print.
 * @filename: Name of the file
 * @letters: Number of letters that prints
 * Return: Writecount
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readcount, writecount;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	readcount = read(fd, buff, letters);
	if (readcount == -1)
	{
		return (0);
	}
	writecount = write(STDOUT_FILENO, buff, readcount);
	free(buff);
	close(fd);
	if (readcount != writecount)
	{
		return (0);
	}
	return (writecount);
}
