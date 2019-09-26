#include "holberton.h"
/**
  * print_square - Print a square of lengh n
  * @n : number of lines
  * Return: Always 0.
  */
void print_square(int n)
{
	int c;
	int d = n;

	while (d > 0)
	{
	c = 1;
	while (c <= n)
	{
		_putchar(35);
		c++;
	}
	d--;
	_putchar('\n');
	}
}
