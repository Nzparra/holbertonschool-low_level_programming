#include "holberton.h"
/**
 * root - Calculate the sqrt to a int
 * @c: Int to compare for the sqrt
 * @sqr: Number to sqrt
 * Return: -1 if error, return value
 */
int root(int c, int sqr)
{
	if (c * c == sqr)
	{
		return (c);
	}
	if (c * c > sqr)
	{
		return (-1);
	}
	return (root(c + 1, sqr));
}
/**
 * _sqrt_recursion - Sqrt in recursion
 * @n: Number to sqrt
 * Return: The sqrt of a number
 */
int _sqrt_recursion(int n)
{
	return (root(1, n));
}
