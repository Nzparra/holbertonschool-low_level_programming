#include <stdio.h>
/**
  * print_buffer - Prints a buffer
  * @b: pointer
  * @size: Bytes of the buffer
  * Return: null
  */
void print_buffer(char *b, int size)
{
	int loop1;

	if (size <= 0)
		printf("\n");
	else
	{
		for (loop1 = 0; loop1 < size; loop1 = loop1 + 10)
		{
			printf("%08x: ", loop1);
			printf("\n");
		}
	}
}
