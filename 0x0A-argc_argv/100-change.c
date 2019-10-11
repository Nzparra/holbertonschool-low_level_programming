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
	unsigned int c;
	int coins;
	int value;
	char *text;
	int cent [4] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = strtol(argv[1], &text, 10);
	coins = 0;
	if (!*text)
	{
		for (c = 0; c < sizeof(cent[c]) && value > 1; c++)
		{
			if (value >= cent[c])
			{
				coins += value / cent[c];
				value %= cent[c];
			}
		}
		if (value == 1)
		{
			coins += 1;
		}
	}
	else
	{
		printf("Error\n");
		return (1);

	}
	printf("%d\n", coins);
	return (0);

}
