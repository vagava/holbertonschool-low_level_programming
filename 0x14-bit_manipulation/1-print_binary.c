#include "holberton.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (aux = n, i = 0; (aux >>= 1) > 0; i++)
		;
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
