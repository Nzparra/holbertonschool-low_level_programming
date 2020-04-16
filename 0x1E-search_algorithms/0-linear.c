#include "search_algos.h"
/**
 * linear_search - linear search
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: the value to search
 * Return:  the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t c = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (c < size)
	{
		printf("Value checked array[%lu]= [%d]\n", c, array[c]);
		if (array[c] == value)
		{
			return (c);
		}
		c++;
	}
	return (-1);
}
