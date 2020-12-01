#include <stdio.h>
/**
 * main -   prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i <= 9)
		{
			putchar(48 + i);
		}
		else
		{
			putchar((i - 10) + 97);
		}
	}
	putchar ('\n');
	return (0);
}
