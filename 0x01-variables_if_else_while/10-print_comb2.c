#include <stdio.h>
/**
 * main - prints the numbers from 00 to 99
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i < '9' || j < '9')
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar ('\n');
	return (0);
}
