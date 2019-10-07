#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - Function prints the sum of 2 diagonal of a matrix
  * @a : Matrix
  * @size : size of array
  * Return: Null
  */
void print_diagsums(int *a, int size)
{
	int c;
	int diag1;
	int diag2;

	diag1 = 0;
	diag2 = 0;
	for (c = 0; c < size * size ; c = c + (size + 1))
	{
		diag1 = diag1 + a[c];
	}
	for (c = size - 1; c < (size * size - 1); c = c + (size - 1))
	{
		diag2 = diag2 + a[c];
	}
	printf("%d, %d\n", diag1, diag2);
}
