#include <stdio.h>

/**
 * before_main - Before main
 */
void __attribute__((constructor)) before_main()
{
	printf("A tortoise, having pretty good sense of a hare's nature,
challenges one to a race.\n");
	printf("I bore my house upon my back!\n");
}


