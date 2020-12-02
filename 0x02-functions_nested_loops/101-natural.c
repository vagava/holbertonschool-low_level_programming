#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5.
 * Return: 0
 */
int main(void)
{
	int i, add = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			add = add + i;
		}
	}
	printf("%d\n", add);
	return (0);
}
