#include "function_pointers.h"
/**
 * int_index - function that searches an integer
 * @array: The array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (c = 0; c < size ; c++)
	{
		if (cmp(array[c]))
		{
			return (c);
		}
	}
	return (-1);
}
