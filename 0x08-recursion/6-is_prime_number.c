#include "holberton.h"
/**
 * prime - Print prime number
 * @c: Int to compare for prime
 * @pri: Number to check if is prime
 * Return: -1 if error, return value
 */
int prime(int c, int pri)
{
	if (pri % c == 0 || pri < 2)
	{
		return (0);
	}
	else if (c == pri - 1)
	{
		return (1);
	}
	else if (pri > c)
	{
		return (prime(c + 1, pri));
	}
	return (1);
}
/**
 * is_prime_number - Checks if a number is prime
 * @n: Number to check
 * Return: The result of prime evaluation
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}
