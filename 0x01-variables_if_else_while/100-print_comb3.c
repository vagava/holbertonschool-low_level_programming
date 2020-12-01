#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 * Return: value 0
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
		for (j = i + 1; j <= 57; j++)
	{
		putchar(i);
		putchar(j);
	if (i < 56 || j < 57)
	{
		putchar(44);
		if (i < 57 || j < 57)
		{
		putchar(32);
		}
	}
	}
	putchar('\n');
	return (0);
}
