#include "holberton.h"
/**
  * reverse_array - Reverse an array
  * @a : int
  * @n : Number of elements of the array
  * Return: Null
  */
void reverse_array(int *a, int n)
{
	int c;
	int d;

	n = n - 1;
	for (d = 0; d < n; d++)
	{
		c = a[n];
		a[n] = a[d];
		a[d] = c;
		n--;
	}
}

