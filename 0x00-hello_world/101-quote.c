#include <stdio.h>
#include <unistd.h>
/**
 * Description : main - Prints a sentence with write.
 * Return: 1 if all its ok.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
