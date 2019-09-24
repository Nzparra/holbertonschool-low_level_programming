#include "holberton.h"
/**
   * print_last_digit - Print the last digit of a number
   * @c: Int that be analized
   * Return: The result of the function
   */
int print_last_digit(int c)
{

	if (c < 0)
	{
		c = (c * -1);
	}
	_putchar((c % 10) + '0');
	return (n % 10);
}
