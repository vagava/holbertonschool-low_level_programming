/**
 * main -prints all possible different combinations of three digits.
 * Return: value 0
 */

#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)

			{
				putchar(i);
				putchar(i);
				putchar(k);
				if (i < 55 || j < 56 || k < 57)
				{
					putchar(44);
					if (i < 57 || j < 57 || k < 57)
					{
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
