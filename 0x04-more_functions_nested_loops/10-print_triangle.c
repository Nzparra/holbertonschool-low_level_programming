#include "holberton.h"
/**
  * print_triangle - Print a triangle
  * @n : number of lines
  * Return: Always 0.
  */
void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= n - i)
			{
				_putchar(32);
			}
			else
			{
				_putchar(42);
			}
		}
		_putchar('\n');
	}
}
