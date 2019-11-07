#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - Prints the binary representation
 * @n : int
 * Return: Binary.
 */
void print_binary(unsigned long int n)
{
	signed int size;
	char d;
	int flag;

	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	size = ((sizeof(n) * 8) - 1);
	flag = 0;
	while (size >= 0)
	{
		d = (n >> size) & 1;
		if (flag == 1)
		{
			putchar(d + '0');
		}
		else
		{
			if (d == 1)
			{
				putchar(d + '0');
				flag = 1;
			}
		}
		size = size - 1;
	}
}
