#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0.
 */
int main(void)
{
	long int a = 0, b = 1, c = 0, suma = 0;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c <= 4000000)
		{
			if (c % 2 == 0)
			{
				suma = suma + c;
			}
		}
	}
	printf("%li\n", suma);
	return (0);
}
