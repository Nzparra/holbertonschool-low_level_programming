#include "holberton.h"
/**
   * print_last_digit - Print the last digit of a number
   * @c: Int that be analized
   * Return: The result of the function
   */
int print_last_digit(int c)
{
	int d;

	if (c < 0)
	{
		c = c * -1;
	}
	else
	{
	}
	d = c % 10;
	_putchar(d + '0');
	return (d);
}
