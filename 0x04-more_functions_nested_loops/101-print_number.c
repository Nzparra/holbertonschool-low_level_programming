#include "holberton.h"
/**
 * print_number - Print a number.
 * @n : Int to print.
 * Return: null.
 */
void print_number(int n)
{
	int b;

	b = n;
	if (b < 0)
	{
		_putchar('-');
		b = b * -1;
	}
	if (b / 10)
	{
		print_number(b / 10);
	}
	_putchar(b % 10 + '0');
}
