#include "holberton.h"
#include <stdio.h>

/**
* main - finds and prints the largest prime factor
*
* Return: 0
*/
int main(void)
{
	long int a;
	long int b;

	a = 2;
	b = 612852475143;
	while (a < (b / 2))
	{
		if ((b % a) == 0)
		{
			b = b / a;
			a = 2;
		}
		else
		{
			a++;
		}
	}
	printf("%ld\n", b);
	return (0);
}
