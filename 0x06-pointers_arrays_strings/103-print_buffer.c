#include "holberton.h"
/**
* print_buffer - entry point
* @b: arguments
* @size: size of buffer
*/
void print_buffer(char *b, int size)
{
	int i, j, k;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		k = (i / 10 == size / 10) ? size % 10 : 10;
		for (j = 0; j < k; j++)
		{
			if (!(j % 2))
				printf("%02x", b[i + j]);
			else
				printf("%02x ", b[i + j]);
		}
		while (j < 10)
		{
			if (!(j % 2))
				printf("  ");
			else
				printf("   ");
		j++;
		}
		for (j = 0; j < k; j++)
			printf("%c", b[i + j] < 32 ? '.' : b[i + j]);
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
