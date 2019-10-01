#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
/**
  * main - Keygen
  * @num_random : Random number into m and n
  * @sum : validator
  * Return: Null.
  */

int main(void)
{
	int num_random;
	int sum;
	
	srand(time(0));
	sum = 0;
	while (1)
	{
		num_random = 32 + rand() %95;
		if(sum + num_random == 2772)
		{
			putchar(num_random);
			break;
		}
		else if ( sum + num_random + 32 < 2772)
		{
			putchar(num_random);
			sum += num_random;
		}
	}
}
