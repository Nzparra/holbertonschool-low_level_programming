#include <stdio.h>
#include "holberton.h"
/**
 * main  - Prints my name
 * @argc : Count of arguments
 * @argv : Arguments to main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int c;
	(void) argc;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
