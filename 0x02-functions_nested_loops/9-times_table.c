#include "holberton.h"
/**
  * times_table - Prints the times tables
  *
  * Return: Always 0.
  */
void times_table(void)
{
	int c;
	int d;
	int e;
	int f;
	int g;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d < 10; d++)
		{
			e = c * d;
			if (e > 9)
			{
				f = e / 10;
				g = e % 10;
				_putchar(f + '0');
				_putchar(g + '0');
			}
			else if (d != 0)
			{
				_putchar(' ');
				_putchar(e + '0');
			}
			else
			{
				_putchar(e + '0');
			}
			if (d != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	d = 0;
	_putchar('\n');
	}
}
