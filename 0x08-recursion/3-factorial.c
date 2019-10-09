#include "holberton.h"
/**
 * factorial - Prints a factorial of a number
 * @n : Number
 * Return: Factorial
 */
int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
