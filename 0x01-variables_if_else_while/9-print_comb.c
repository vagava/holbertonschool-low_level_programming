#include <stdio.h>
/**
 * main -   prints all possible combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar ('\n');
	return (0);
}
