#include "holberton.h"
#include <stdio.h>
/**
  * Description : main - print sum of even number in a fibo series limit 4M
  *
  * Return: 0 if all is ok
  */
int main(void)
{
	long number_one;
	long number_two;
	long even_fibosum;
	long sum_fibonacci;
	long limit_fibonacci;

	number_one = 1;
	number_two = 2;
	even_fibosum = 0;
	sum_fibonacci = 0;
	limit_fibonacci = 4000000;
	while (number_one < limit_fibonacci && number_two < limit_fibonacci)
	{
		if ((number_two % 2) == 0)
		{
			even_fibosum = even_fibosum + number_two;
		}
		else
		{}
		sum_fibonacci = number_one + number_two;
		number_one = number_two;
		number_two = sum_fibonacci;
	}
	printf("%ld\n", sum_fibonacci);
	return (0);
}
