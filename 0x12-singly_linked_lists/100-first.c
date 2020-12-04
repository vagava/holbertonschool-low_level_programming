#include "lists.h"
void print_fast(void) __attribute__ ((constructor));
/**
* print_fast - prints before main
*
* Return: void
*/
void print_fast(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
