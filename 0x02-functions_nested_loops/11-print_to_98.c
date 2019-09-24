#include "holberton.h"
#include <stdio.h>
/**
  * print_to_98 - Prints numbers from c to 98
  * @c: Number
  * Return: Always 0.
  */
void print_to_98(int c)
{
	if (c < 99)
	{
		for (; c < 98; c++)
		{
			printf("%d, ", c);
		}
		printf("98\n");
	}
	else
	{
		for (; c > 98 ; c--)
		{
			printf("%d, ", c);
		}
		printf("98\n");
	}
}
