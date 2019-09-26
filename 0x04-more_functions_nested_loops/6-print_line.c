#include "holberton.h"
/**
  * print_line - Print a line of lenght n
  * @n : number of lines
  * Return: Always 0.
  */
void print_line(int n)
{
	int c;

	c = 1;
	while (c <= n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
