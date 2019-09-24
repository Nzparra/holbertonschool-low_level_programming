#include "holberton.h"
/**
  * print_sign - Prints the sign of a number
  * @c: Int that be analized
  * Return: Always 0.
  */
int print_sign(int c)
{
	if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		if (c > 0)
		{
			_putchar(43);
			return (1);
		}
		else
		{
			_putchar(45);
			return (-1);
		}
	}
}
