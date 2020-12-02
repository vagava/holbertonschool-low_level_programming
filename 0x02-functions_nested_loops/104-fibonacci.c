#include <stdio.h>
/**
 * main - first 98 Fibonacci numbers
 * Return: 0.
 */
int main(void)
{
	unsigned long int i, a = 0, b = 1, c;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i < 97)
		{
			printf("%li, ", c);
		}
		else
		{
			printf("%li\n", c);
		}
	}
	return (0);
}
