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
	c = 0;
	while (c < n)
	{
		if (c < n - 1)
		{
			printf("%d%s", va_arg(nums, int), separator);
		}
		else
		{
			printf("%d", va_arg(nums, int));
		}
		c++;
	}
	va_end(nums);
	printf("\n");
}
