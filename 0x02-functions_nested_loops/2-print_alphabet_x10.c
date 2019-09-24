#include "holberton.h"
/**
  * Description : main - Prints a number and if is positive or negative
  * Return: 0 if all its ok.
  */
void print_alphabet_x10(void)
{
	int a;
	int c;

	for ( c = 1 ; c <=10 ; c++)
	{
		for(a = 'a'; a <= 'z'; a ++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}

