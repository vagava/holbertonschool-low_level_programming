#include "holberton.h"
/**
 * main - entri point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 1 if error, else 0.
 */
int main(int argc, char **argv)
{
	int a = 0, b = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", (a * b));
	return (0);
}
