#include "variadic_functions.h"
/**
 * sum_them_all - Funtcion that sums all ints
 * @n: Count of number to sum
 * Return: 0 if no nums, or the sum of all ints
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int add, c;
	va_list nums;

	if (n == 0)
	{
		return (0);
	}
	va_start(nums, n);
	for (c = 0, add = 0; c < n; c++)
	{
		add += va_arg(nums, int);
	}
	va_end(nums);
	return (add);
}
