#include "holberton.h"
/**
 * clear_bit - Sets the value of a bit to 0
 * @n : pointer to a string
 * @index : index
 * Return: Number or 0 if fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size, c;

	size = sizeof(n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	c = 1 << index;
	*n = ~c & *n;
	return (1);
}
