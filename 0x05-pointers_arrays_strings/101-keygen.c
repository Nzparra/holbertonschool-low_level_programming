#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Keygen
  *
  * Return: 0 all is ok.
  */
int main(void)
{
	int num_random;
	int sum;

	srand(time(0));
	sum = 0;
	while (1)
	{
		num_random = (rand() % 125) + 1;
		if (sum + num_random == 2772)
		{
			printf("%c", num_random);
			break;
		}
		else if (sum + num_random  < 2772)
		{
			printf("%c", num_random);
			sum += num_random;
		}
	}
	return (0);
}
