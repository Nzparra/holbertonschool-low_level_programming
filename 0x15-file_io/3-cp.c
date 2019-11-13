#include "holberton.h"
/**
 * main - Function that copies a file
 * @ac: argument count
 * @av: argument value
 * Return: 0 if all is ok
 */
int main(int ac, char *av[])
{
	int fd, fd_copy, rd, wr;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	fd_copy = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IWGRP | S_IRGRP | S_IROTH);
	if (fd_copy == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	rd = 1;
	while (rd)
	{
		rd = read(fd, buffer, rd);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (rd > 0)
		{
			wr = write(fd_copy, buffer, rd);
			if (wr == -1 || wr != rd)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
			}
		}
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", fd), exit(100);
	}
	if (close(fd_copy) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", fd_copy), exit(100);
	}
	return (0);
}
