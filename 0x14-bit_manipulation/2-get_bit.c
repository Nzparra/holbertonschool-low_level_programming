#include "holberton.h"
/**
 * get_bit - Returns the value of a bite
 * @n : int
 * @index : index
 * Return: The value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
