#include "function_pointers.h"
/**
 *array_iterator -function given as parameter on each element of an array
 *@array: The array
 *@size : size of the array
 *@action : pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
