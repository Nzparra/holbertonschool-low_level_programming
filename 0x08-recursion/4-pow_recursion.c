#include "holberton.h"
/**
 * _pow_recursion - Prints a pow number
 * @x : Int to pow
 * @y : Int to numbers to pow
 * Return: Factorial
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
