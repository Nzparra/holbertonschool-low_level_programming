#include <stdio.h>
/**
 * Description : main - Prints number of base 10
 * Return: 0 if all its ok.
 */
int main(void)
{

	int b = '0';
		while (b <= '9')
		{
			putchar(b);
			b++;
		}
		putchar('\n');
		return (0);
}
