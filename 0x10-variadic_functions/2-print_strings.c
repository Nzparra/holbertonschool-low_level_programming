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
	char * antslid;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(string, n);
	for (c = 0; c < n; c++)
	{
		antslid = va_arg(string, char *);
		if (c < n - 1)
		{
			if (antslid != NULL)
			{
				printf("%s%s", antslid, separator);
			}
			else
			{
				printf("(nil)");
			}
		}
		else
		{
			if (antslid != NULL)
			{
					printf("%s\n", antslid);
			}
			else
			{
				printf("(nil)\n");
			}
		}
	}
	va_end(string);
}
