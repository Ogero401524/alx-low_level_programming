#include <stdio.h>
void message(void) __attribute__((constructor));
/**
 * message - prints a sentence before the main
 * function is executed
 */
void message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
