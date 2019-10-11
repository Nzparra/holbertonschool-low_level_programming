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
	int num;
	int sum;
	char *text;

	sum = 0;
	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
			num = strtol(argv[c], &text, 10);
			if (!*text)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
