#include "holberton.h"
#include <stdio.h>
/**
  * Description : main - print fibonacci for the first 100 num
  *
  * Return: 0 if all is ok
  */
int main(void)
{
	unsigned long number_one;
	unsigned long number_two;
	int fibonacci_number;
	unsigned long sum_fibonacci;
	unsigned long half_one;
	unsigned long half_two;
	unsigned long half_sum;
	unsigned long final_sum;

	number_one = 0;
	number_two = 1;
	for (fibonacci_number = 1; fibonacci_number <= 92 ; fibonacci_number++)
	{
		sum_fibonacci = number_one + number_two;
		number_one = number_two;
		number_two = sum_fibonacci;
		printf("%lu ,", sum_fibonacci);
	}
	number_one = number_one / 1000;
	half_one = number_one % 1000;
	number_two = number_two / 1000;
       	half_two = number_two % 1000;
	for(fibonacci_number = 93; fibonacci_number <= 99; fibonacci_number++)
	{	
		half_sum = (half_one + half_two) / 1000;
		final_sum = (half_one + half_two) - half_sum * 1000;
	       	sum_fibonacci = (number_one + number_two) + half_sum;
		half_one = half_two;
		half_two = final_sum;
		number_one = number_two;
		number_two = sum_fibonacci;
		if (final_sum > 99)
		{	
			printf("%lu%lu", sum_fibonacci, final_sum);
		}
		else
		{
			printf("%lu0%lu", sum_fibonacci, final_sum);
		}
		if (fibonacci_number != 99)
		{
			printf(", ");
		}
	}	
	putchar('\n');
	return (0);
}



