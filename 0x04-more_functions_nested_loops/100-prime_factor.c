#include <stdio.h>
#include <math.h>
/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
int main(void)
{
	int c;
	long number =  612852475143;

	for(c = (int) sqrt(number); c > 2; c++)
	{	
		if ( number % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}
	return (0);
}
