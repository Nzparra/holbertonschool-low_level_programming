#include "holberton.h"
/**
  * print_most_numbers - Print numbers 0 - 9 whitout 2 and 4
  *
  * Return: null
  */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
		}
		else
		{
		_putchar(c);
		}
	}
	_putchar('\n');
}
