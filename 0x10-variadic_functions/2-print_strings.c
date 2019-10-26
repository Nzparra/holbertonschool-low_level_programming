#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Funtcion that prints numbers
 * @n: Count of number to sum
 * @separator: The string to be printedbetweem
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list string;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(string, n);
	for (c = 0; c < n; c++)
	{
		if (c < n - 1)
		{
			if (va_arg(string, char *) != NULL)
			{
				printf("%s%s", va_arg(string, char *), separator);
			}
			else
			{
				printf("(nil)");
			}
		}
		else
		{
			if (va_arg(string, char *) != NULL)
			{
					printf("%s\n", va_arg(string, char *));
			}
			else
			{
				printf("(nil)\n");
			}
		}
	}
	va_end(string);
}
