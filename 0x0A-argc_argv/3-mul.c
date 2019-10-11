#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main  - Prints my name
 * @argc : Count of arguments
 * @argv : Arguments to main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int c;
	int x;

	x = 1;
	(void) argc;

	if (argv[1] && argv[2])
	{
		for (c = 1; c < argc; c++)
		{
			x *= atoi(argv[c]);
		}

		printf("%d\n", x);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);

}
