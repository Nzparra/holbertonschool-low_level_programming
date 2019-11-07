#include "holberton.h"
/**
 * binary_to_uint - Converts to a int
 * @b : pointer to a string
 * Return: Number or 0 if fails.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int loop, sum;

	for (sum = 0, loop = 0 ; b[loop]; loop++)
	{
		if (b[loop] == '1')
		{
			sum = (sum << 1) | 1;
		}
		else if (b[loop] == '0')
		{
			sum = sum << 1;
		}
		else if (b[loop] != '0' && b[loop] != '1')
		{
			return (0);
		}
	}
	return (sum);
}
