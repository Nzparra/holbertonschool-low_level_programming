#include "holberton.h"
#include <stdio.h>
/**
  * Description : main - print fibonacci for the first 50 num
  *
  * Return: 0 if all is ok
  */
int main(void)
{
	long number_one;
	long number_two;
	long fibonacci_number;
	long sum_fibonacci;

	number_one = 0;
	number_two = 1;
	for (fibonacci_number = 0; fibonacci_number < 50 ; fibonacci_number++)
	{
		sum_fibonacci = number_one + number_two;
		number_one = number_two;
		number_two = sum_fibonacci;
		printf("%ld", sum_fibonacci);
		if (fibonacci_number == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
