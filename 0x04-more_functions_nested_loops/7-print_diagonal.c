#include "holberton.h"
/**
  * print_diagonal - Print a diagonal
  * @n : number of lines
  * Return: Always 0.
  */
void print_diagonal(int n)
{
	int c;
	int d;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
	c = 0;
	while (n > 0)
	{
		d = c;
		while (d > 0)
		{
			_putchar(' ');
			d--;
		}
		_putchar(92);
		_putchar('\n');
		c++;
		n--;
	}
	}
}
