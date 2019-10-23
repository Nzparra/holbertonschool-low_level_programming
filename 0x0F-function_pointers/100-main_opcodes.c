#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the opcodes of its own main function
 * @argc: Count of arguments
 * @argv: Pointer to the values
 * Return: 0 if all is ok
 */
int main(int argc, char *argv[])
{
	unsigned char *p;
	int memory, loop;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	memory = atoi(argv[1]);
	if (memory < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (unsigned char *)main;
	for (loop = 0; loop < (memory - 1); loop++)
	{
		printf("%02hhx ", p[loop]);
	}
	printf("%hhx\n", p[loop]);
	return (0);
}
