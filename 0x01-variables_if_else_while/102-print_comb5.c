#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0.
 */
int main(void)
{
	int i, j;

	for (j = 0; j <= 99; j++)
	{
		for (i = j + 1; i <= 99; i++)
		{
			if (i != j)
			{
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				if (j < 98)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
