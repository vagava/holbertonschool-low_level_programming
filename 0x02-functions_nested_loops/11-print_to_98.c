#include<stdio.h>
#include "holberton.h"
/**
 * print_to_98 - ptint the numbers of n to 98
 * @n: number to start to count
 *
 */
void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
		printf("%d, ", i);
		if (i == 98)
		{
			printf("%d", i);
		}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}

