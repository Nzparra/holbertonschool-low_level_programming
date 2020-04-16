#include "search_algos.h"
/**
 * binary - serach a value in an array
 * @array: pointer to the first element of the array
 * @low: index
 * @value: the value to search
 * @high: index
 * Return:  the first index where value is located
 */
int binary(int *array, int value, size_t low, size_t high)
{
	size_t mid, c;

	printf("Searching in array: ");
	for (c = low; c <= high; c++)
	{
		printf("%d", array[c]);
		if (c < high)
		{
			printf(", ");
		}
	}
	printf("\n");
	if (high == low && array[low] != value)
	{
		return (-1);
	}
	mid = low + ((high - low) / 2);
	if (array[mid] == value)
	{
		return (mid);
	}
	if (array[mid] < value)
	{
		return (binary(array, value, mid + 1, high));
	}
	if (array[mid] > value)
	{
		return (binary(array, value, low, mid - 1));
	}
	return (-1);
}
/**
 * binary_search - serach a value in an array
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: the value to search
 * Return:  the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (binary(array, value, 0, size - 1));
}
