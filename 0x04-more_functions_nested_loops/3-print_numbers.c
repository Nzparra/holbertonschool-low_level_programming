#include "holberton.h"
/**
  * print_numbers - Print numbers 0 - 9i
  *
  * Return: null
  */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
