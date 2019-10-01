#include "holberton.h"
/**
  * swap_int -Swaps to values.
  * @a : first int
  * @b : second int
  * Return: Null
  */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

