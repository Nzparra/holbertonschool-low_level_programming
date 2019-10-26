#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Funtcion that prints numbers
 * @n: Count of number to sum
 * @separator: The string to be printedbetweem
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list nums;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(nums, n);
	for (c = 0; c < n; c++)
	{
		if (c < n - 1)
		{
			printf("%d%s", va_arg(nums, int), separator);
		}
		else
		{
			printf("%d\n", va_arg(nums, int));
		}
	}
	va_end(nums);
}
