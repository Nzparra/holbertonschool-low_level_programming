#include <stdio.h>
/**
 * Description : main - Prints a the alphabet in lower case without e an q
(*
 * Return: 0 if all its ok.
 */
int main(void)
{
	char l;
		for (l = 'a'; l <= 'z'; ++l)
			if (l != 'e' && l != 'q')
			putchar(l);
			putchar('\n');
		return (0);
}
