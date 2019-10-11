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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
