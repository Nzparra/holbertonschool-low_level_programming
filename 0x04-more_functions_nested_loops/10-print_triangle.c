#include "holberton.h"
/**
  * print_triangle - Print a triangle
  * @size : number of lines
  * Return: Always 0.
  */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
