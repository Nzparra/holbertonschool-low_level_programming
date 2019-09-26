#include "holberton.h"
/**
 * print_number - Print a number.
 * @n : Int to print.
 * Return: null.
 */
void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	b = n;
	if (b / 10)
	{
		print_number(b / 10);
	}
	_putchar(b % 10 + '0');
}
